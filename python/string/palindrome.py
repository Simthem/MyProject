import re;

def palindrome(str):
    str = re.sub('[^A-Za-z0-9]+', '', str).lower();
    i = 0;
    j = len(str) - 1;
    while i < j:
        if str[i] != str[j]:
            return False;
        i += 1;
        j -= 1;
    return True;

print(palindrome("0P"));
