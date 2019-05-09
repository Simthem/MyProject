def soustract_add(cur1, cur2, result, arr):
    if cur1 > cur2:
        if (cur2 == 1 and (cur1 == 5 or cur1 == 10)) or\
                  (cur2 == 10 and (cur1 == 50 or cur1 == 100)) or\
                  (cur2 == 100 and (cur1 == 500 or cur1 == 1000)):
            result += cur1 - cur2;
            arr.pop();
    else:
        result += cur1;
    
    return result;

def roman_to_integer(str):
    roman = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000};
    arr = list(str);
    result = 0;

    while arr:
        cur = arr.pop();
        if len(arr) - 1 >= 0 and cur != 'I':
            result = soustract_add(roman[cur], roman[arr[len(arr) - 1]], result, arr);
        else:
            result += roman[cur];

    return (result);


str = "MCMXCIV";
print(roman_to_integer(str));
