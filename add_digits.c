int addDigits(int num){
    int sum=0,r;
    int temp=num;
    while (temp>0)
    {
        r=temp%10;
        sum+=r;
        temp=temp/10;
    }
    while (sum>9)
    {
        temp=sum;
        sum=0;
        while (temp>0)
        {
        r=temp%10;
        sum+=r;
        temp=temp/10;
        }
    }
    return sum;
}
