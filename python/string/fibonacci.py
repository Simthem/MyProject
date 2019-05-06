def fibonacci(nb):
    if nb <= 0 or nb >= 30:
        return (0);
    if nb == 1 or nb == 2:
        return (1);
    return (fibonacci(nb - 1) + fibonacci(nb - 2));

print(fibonacci(7));
