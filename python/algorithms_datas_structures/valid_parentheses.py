def valid_parentheses(str):
   arr = list();
   dict = {"(":")", "{":"}", "[":"]"};

   for i in str:
       if i == "{" or i == "[" or i == "(":
           arr.append(i);
       elif arr and dict.keys()[dict.values().index(i)] == arr[len(arr) - 1]\
                                                 and (i == "}" or i == "]" or i == ")"):
           arr.pop();
       else:
           return False;
   if not arr:
       return True;
   else:
       return False;
 

str = "{[[()]]}";
print(valid_parentheses(str));
str = "{[[()]";
print(valid_parentheses(str));
str = "{[[(]]}";
print(valid_parentheses(str));
str = "{[}]";
print(valid_parentheses(str));
