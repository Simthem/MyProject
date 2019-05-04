def jewels_and_stones(J, S):
    hash_table = dict()
    counter = 0

    for letter in J:
        if letter not in hash_table:
            hash_table[letter] = 1
        if letter in hash_table:
            hash_table[letter] + 1
    for letter in S:
        if letter in hash_table:
            counter += 1

    return counter

print(jewels_and_stones("aaA", "bbbaaAaA"))
