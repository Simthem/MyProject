def uncommon_words(str1, str2):
    str1 = str1.split();
    str2 = str2.split();
    hashtable = {};
    result = [];

    for i in str1:
        if i not in hashtable:
            hashtable[i] = 1;
        else:
            hashtable[i] += 1;
    for i in str2:
        if i in hashtable:
            hashtable[i] -= 1;
            if hashtable[i] == 0:
                del hashtable[i];
        else:
            hashtable[i] = 1;
    for item in hashtable:
        result.append(item);
    return result;

str1 = "this apple is sweet";
str2 = "this apple is sour";

print(uncommon_words(str1, str2,));
