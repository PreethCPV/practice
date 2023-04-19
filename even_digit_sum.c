int countEven(int num){
    int i,sum,r;
    int temp,c=0;
    for(i=1;i<(num+1);i++)
    {
        temp=i;
        sum=0;
        while (temp>0)
        {
            r=temp%10;
            sum+=r;
            temp=temp/10;
        }
    if (sum%2==0)
    {
        c++;
    }
    }
    return c;
    return 0;
}
