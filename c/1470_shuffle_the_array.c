/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *result = malloc(sizeof(nums) * numsSize);
    *returnSize = numsSize;
    for (int i = 0; i < n * 2; i++)
        result[i] = nums[i/2 + n * (i%2)];
    return result;
}

