def loop_through_hash_table(hash_table):
    max_num = 0
    max_freq = 0

    for key in hash_table:
        print("%s:%s" % (key, hash_table[key]))
        hash_key = key
        hash_val = hash_table[key]
        if max_freq < hash_val:
            max_freq = hash_val
            max_num = hash_key
            
    return max_num
hash_table = {1:3, 2:2, 3:6}

print(loop_through_hash_table(hash_table))
