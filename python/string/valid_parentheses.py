def valid_parentheses(str):
    arr = list();
    arr_reverse = {'{':'}', '[':']', '(':')'};
    i = len(str) - 1;
    flag = 1;

    if i != 0:
        while i >= 0:
            if str[i] == '}' or str[i] == ']' or str[i] == ')':
                arr.append(str[i]);
                peek = arr[len(arr) - 1];
                flag = 1;
            elif arr and str[i] in arr_reverse and (arr_reverse[str[i]] == peek):
                arr.pop();
                if arr:
                    peek = arr[len(arr) - 1];
                flag = 0;
            else:
                return False;
            i -= 1;
    if not str or (not arr and not flag):
        return True;
    return False;

str = "[[]]";
print(valid_parentheses(str));
