def intersection_of_two_arrays(str1, str2):
    hashtable = dict();
    str3 = [];
    i = 0;

    for letter in str1:
        if letter not in hashtable:
            hashtable[letter] = 1;
        else:
            hashtable[letter] += 1;
    for letter in str2:
        if letter in hashtable:
            hashtable[letter] -= 1;
            if letter not in str3:
                str3.append(letter);
    return str3;

nums1 = [4, 9, 5];
nums2 = [9, 4, 9, 8, 9];

print(intersection_of_two_arrays(nums1, nums2));
