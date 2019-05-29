###### Does not work for "abcde" "abced", can resolve with flag but if i do ######
###### that i will not work for "[empty]""[empty]" -- i see later ######


def rotate_string(str1, str2):
    i = 0;
    j = 0;

    if (str1 and not str2) or (not str1 and str2):
        return False;
    if str1 and str2:
        while str1[i] != str2[j]:
            i += 1;
            if i > len(str1) - 1:
                return False;
        count = i;
        while str1[i] != str1[count] and str1[i] == str2[j] and str1[i]:
            if i <= len(str1) - 1:
                i += 1;
            if i != count and not str2[j]:
                return False;
            j += 1;
            if i > len(str1) - 1:
                i = 0;
    return True;

str1 = "abcde";
str2 = "cdeab";
print(rotate_string(str1, str2));
