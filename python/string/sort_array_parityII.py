def swap(int1, int2):
    k = int1;
    int1 = int2;
    int2 = k;

def sort_array_parityII(tab):
    i = 0;
    j = 0;

    while i < len(tab):
        if i % 2 == 0 and tab[i] % 2 != 0:
            while tab[j] % 2 != 0:
                j += 1;
                if tab[j] % 2 == 0:
                    swap(tab[i], tab[j]);
        if i % 2 != 0 and tab[i] % 2 == 0:
            while tab[j] % 2 == 0:
                j += 1;
                if tab[j] % 2 != 0:
                    swap(tab[i], tab[j]);
        i += 1;
        j = i;
    return (tab);


tab = [1, 47, 48, 56, 7, 92];
sort_array_parityII(tab);
