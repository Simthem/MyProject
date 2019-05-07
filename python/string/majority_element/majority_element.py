def majority_element(nums):
    hashtable = dict();
    max_val = 0;
    max_freq = 0;
    result = float("-inf");

    for key in nums:
        if key not in hashtable:
            hashtable[key] = 1;
        else:
            hashtable[key] += 1;
    for key in hashtable:
        if max_freq <= hashtable[key]:
            if max_freq < hashtable[key] or result < key:
                max_freq = hashtable[key];
                result = key;

    return result;

nums = [25, 31];
print(majority_element(nums));
