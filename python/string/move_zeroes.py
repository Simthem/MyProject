def swap(arr, i, j):
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

def move_zeroes(arr):
    i = 0;
    j = 0;

    while i < len(arr) and j < len(arr):
        if arr[i] != 0:
            i += 1;
        if arr[j] == 0:
            j += 1;
        if i < len(arr) and j >= i and j < len(arr) and arr[i] == 0 and j != 0 and arr[j] != 0:
            swap(arr, i, j);
        j += 1;
    return arr;

arr = [0,1,0,3,12];

print(move_zeroes(arr));
