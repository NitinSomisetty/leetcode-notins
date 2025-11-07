void moveZeroes(int* nums, int numsSize) {
    int newarr[numsSize];
    int j =0 ; int count=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            newarr[j++]=nums[i];
            count++;
        }
    }
    int k=numsSize-count;
    while(k--)
    {
        newarr[j++]=0;
    }
    //put it back to nums
    for(int i=0; i<numsSize;i++)
    {
        nums[i]=newarr[i];
    }
}