//Method-1 using Binary-Search(10ms)
class Solution {
public:
    int arrangeCoins(int n)
    {
        long long low=1;
        long long high=n;
         long long mid;
        int max_s=1;
        long long num;
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            num=mid*(mid+1)/2;
            
            if(num<=n)
            {
                max_s=mid;
                low=mid+1;
            }
            
            else
                high=mid-1;
            
            
            
        }
        
        
        
        
        return max_s;
        
        
    }
};



// Method-2(4ms)
class Solution {
public:
    int arrangeCoins(int n)
    {
        int i=0;
        int coins=n;
        
        while(coins>=0)
        {
            i=i+1;
            coins=coins-i;
            
        }
        
        
        return i-1;
    }
};
