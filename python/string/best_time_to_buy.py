#######-BRUTE_FORCE-#######

def max_prof(arr):
    result = [];
    max_prof = 0
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            result.append(arr[j] - arr[i]);
    if result:
        max_prof = max(max(result), max_prof);
    return max_prof;
prices = [7,6,4,3,1];

print(best_time_to_buy(prices));

prices = [7,1,5,3,6,4];

print(best_time_to_buy(prices));
