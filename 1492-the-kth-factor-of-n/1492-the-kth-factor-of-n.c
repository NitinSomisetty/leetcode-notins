int kthFactor(int n, int k) 
{
    int arr[1000];
    int j=1;
    arr[0]=1;
    for(int i=1;i<=n;i++)
    { 
        if(n%i==0)
        {
            arr[j++] = i;
        }
    }

    if(k>(j-1))
    {
        return -1;
    }
return arr[k];

}