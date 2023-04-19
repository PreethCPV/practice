int singleNumber(int* nums, int numsSize){
    int i,j,c;
    for(i=0;i<numsSize;i++)
    {
        c=0;
        for(j=0;j<numsSize;j++)
        {
            if (nums[i]==nums[j])
            {
                c+=1;
            }
        }
        if (c==1)
        {
            return nums[i];
        }
    }
    return 0;

}
