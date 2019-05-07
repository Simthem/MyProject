def swap(str, i, j):
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;

def revers_vowels(str):
    hashtable = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    str = list(str);
    i = 0;
    j = len(str) - 1;

    while i < j:
        if str[i] not in hashtable:
            i += 1;
        if str[j] not in hashtable:
            j -= 1;
        if str[i] in hashtable and str[j] in hashtable:
            swap(str, i, j);
            i += 1;
            j -= 1;
    return "".join(str);

str1 = "leetcode";
print(reverse_vowels(str1));
