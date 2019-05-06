def shortest_unsorted_continuous_subarray(nums):
    numssorted = nums[:];
    numssorted.sort();

    start = 0;
    end = 0;
    for i in range(len(nums)):
        if nums[i] != numssorted[i]:
            start = i;
            break;
    for n in range(len(nums) - 1, -1, -1):
        if nums[n] != numssorted[n]:
            end = n;
            break;
    if (start == 0) and (end == 0):
        return (0);
    else:
        return end - start + 1;

nums = [2, 6, 6, 8, 10, 9, 15]

print(shortest_unsorted_continuous_subarray(nums));
