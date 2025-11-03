
int maxArea(int* height, int heightSize) 
{
    int j=heightSize-1;
    int i=0;
    int left=height[i];
    int right=height[j];
    int max=j*(left<right ? left:right);
    while(i<j)
    {
        left=height[i];
        right=height[j];
        int temp=(j-i) * (left<right ? left:right);
        if(temp>max)
        {
            max=temp;
        }
        (left<right) ? i++ : j-- ;

    }

      return max; 
}