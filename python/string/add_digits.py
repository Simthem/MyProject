def main(nb):
    i = 0;
    tab = [];
    result = sum(add_digits(nb, tab));
    while result > 9:
        tab = []
        result = sum(add_digits(result, tab));
    return result;

def add_digits(nb, tab):
    if nb == 0:
        return tab
    if nb >= 10:
        add_digits(nb // 10, tab);
    tab.append(nb % 10);
    return tab;

nb = 3462112345;
print(main(nb));
