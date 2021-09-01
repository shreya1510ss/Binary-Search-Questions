class Solution {
public:
    bool isPerfectSquare(int num)
    {
        long  long low=1;
        long long high=num;
        long long mid;
        long long n;
        
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            n=mid*mid;
            
            if(n==num)
                return true;
            else if(n>num)
                high=mid-1;
            else if(n<num)
                low=mid+1;
            
        }
        
        
        return false;
        
    }
};
