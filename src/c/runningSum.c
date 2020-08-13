/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int* result = (int*)malloc(sizeof(int) * numsSize);
    result[0] = nums[0];
    for (int i = 1; i < numsSize; i++)
            result[i] = result[i - 1] + nums[i];
    
    *returnSize = numsSize;
    return result;
}