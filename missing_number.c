int missingNumber(int* nums, int num){
    int i,j,c;
    for(i=0;i<num+1;i++)
    {
        c=0;
        for(j=0;j<num;j++)
        {
            if (i==nums[j])
            {
                c+=1;
            }
        }
    if (c==0)
    {
        return i;
    }
    }
return 0;
}
