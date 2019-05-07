def jewels_and_stones(J, S):
    hashtable = dict();
    counter = 0;

    for temp in J:
        if temp not in hashtable:
            hashtable[temp] = 1;
        if hashtable[temp]:
            hashtable[temp] += 1;
    for temp in S:
        if temp in hashtable and hashtable[temp]:
            counter += 1;
    return (counter);


print(jewels_and_stones("aaAAAA", "bbbaaAaA"));
