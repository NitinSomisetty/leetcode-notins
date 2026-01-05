int kthFactor(int n, int k) 
{
    int arr[1000];
    int j=1;
    int count=0;
    for(int i=1;i<=n;i++)
    { 
        arr[0]=1;
        if(n%i==0)
        {
            arr[j++] = i;
            count++;
        }
    }

    if(k>count)
    {
        return -1;
    }
    else{
    return arr[k];
}
}