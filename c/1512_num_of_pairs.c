int numIdenticalPairs(int* nums, int numsSize){
    //its a straight solution (brute force)
    //NB for myself: шт the future, think about how this can be implemented with hashtable
    int result = 0;
    for (int i = 0; i < numsSize; i++)
      for (int j = i + 1; j < numsSize; j++)
        result += nums[i] == nums[j];
    return result;
}