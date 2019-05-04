def anagram(str1, str2):
    hash_table = dict()
    
    for letter in str1:
        if letter not in hash_table:
            hash_table[letter] = 1
        else:
            hash_table[letter] += 1
    for letter in str2:
        if letter in hash_table:
            hash_table[letter] -= 1
            if hash_table[letter] == 0:
                del hash_table[letter]
        else:
            hash_table[letter] = 1
            
    return len(hash_table) == 0
