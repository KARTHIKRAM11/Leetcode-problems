int majorityElement(int* nums, int numsSize) {
    int max=nums[0];
    for(int i=0 ; i<numsSize ; i++)
    {
        if(max < nums[i])
            max=nums[i];
    }
    //printf("%d",max);
    return max;
}