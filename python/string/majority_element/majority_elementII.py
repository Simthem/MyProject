#####--TOO SLOW--#####

def majority_element(nums):
    counter = 0;
    result = nums[0];

    for i in nums:
        curnum = nums.count(i);
        if nums.count(i) > counter:
            if i > result or nums.count(i) > counter:
                result = i;
            counter += 1;

    return result;
    
nums = [10, 20, 10, 20];
print(majority_element(nums));
