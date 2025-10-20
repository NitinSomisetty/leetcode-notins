/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left=0;
    int right=numbersSize-1;
    while(left<right)
    {
        if(numbers[left]+numbers[right]==target)
        {
            int* result = (int*)malloc(2 * sizeof(int));
            result[0]=left+1;
            result[1]=right+1;
            *returnSize = 2;
            return result;
        }
        if(numbers[left]+numbers[right]<target)
        {
            left++;
        }
        else if (numbers[left]+numbers[right]>target)
        {
            right--;
        }
        
    }
    return NULL;
}