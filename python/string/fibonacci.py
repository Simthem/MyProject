def fibonacci(nb):
    if nb < 0 or nb > 30:
        return (0);
    if nb == 0 or nb == 1:
        return (nb);
    return (fibonacci(nb - 1) + fibonacci(nb - 2));

nb = 30;
print(fibonacci(nb));
