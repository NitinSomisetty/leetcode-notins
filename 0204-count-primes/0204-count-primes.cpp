class Solution {
public:
    int countPrimes(int n) {
    if(n <= 2) return 0;
      vector<int> prime(n,0);
        int count=n-2; //exclude 0 and 1
        for(int i=2; i<= std::sqrt(n); i++)
        {
            if(prime[i]==0)
            {
                for(int j=i*i; j<n; j=j+i)
                {
                    prime[j]=1;
                    
                }
            }
        }
        for(int i=2; i<n; i++)
        {
            if(prime[i]==1)
            {
                count--;
            }
        } return count;    
    }
};
