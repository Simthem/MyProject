def str_str(haystack, needle):
    if (len(haystack) == 0 or len(needle) == 0):
        return 0
    result = -1
    i = 0
    while (i < len(haystack)):
        cur = haystack[i: i + len(needle)]
        if cur == needle:
            result = i
        i += 1
    return result
