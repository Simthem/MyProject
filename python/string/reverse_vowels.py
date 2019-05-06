def reverse_vowels(str1):
    vowels1 = {'A', 'E', 'I', 'O', 'U'};
    vowels2 = {'a', 'e', 'i', 'o', 'u'};
    s1 = list(str1);
    i = 0;
    j = len(str1) - 1;

    while i < j:
        if (s1[i] in vowels1 or s1[i] in vowels2) and (s1[j] in vowels1 or s1[j] in vowels2):
            temp = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
            i += 1;
            j -= 1;
        if not (s1[i] in vowels1 or s1[i] in vowels2):
            i += 1;
        if not (s1[j] in vowels1 or s1[j] in vowels2):
            j -= 1;
    s1 = "".join(s1);
    return s1;

str1 = "leetcode";
print(reverse_vowels(str1));
