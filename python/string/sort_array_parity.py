def sort_array_parity(tab):
    i = 0;
    j = 0;
    temp = 0;

    if not (len(tab) >= 1 and len(tab) <= 5000):
        return (0);
    while i < len(tab):
        if not tab[i] >= 0 and tab[i] <= 5000:
            return (0);
        if (tab[i] % 2) == 0:
            k = tab[i];
            tab[i] = tab[j];
            tab[j] = k;
            j += 1;
        i += 1;
    return (tab);

tab = [];
print(sort_array_parity(tab));
