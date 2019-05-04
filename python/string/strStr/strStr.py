def check_substring(haystack, needle, i):
    if not i < len(haystack):
        return False
    
    return haystack[i:i + len(needle)] == needle

def str_str(haystack, needle):
    i = 0
    result = -1
    flag = False

    if len(haystack) < len(needle):
        return result;
    if not needle:
        return (0);
    while(i < len(haystack) and not flag):
        if needle and haystack and haystack[i] == needle[0]:
            if check_substring(haystack, needle, i):
                result = i
                flag = True
        i+=1

    return result

print(str_str("", "a"));
print(str_str("", "aaa"));
print(str_str("aaa", ""));
print(str_str("a", ""));
print(str_str("baaa", "aaa"));
