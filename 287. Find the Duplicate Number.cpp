

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int low=1;
        int high=nums.size()-1;
        int mid;
        int count;
        int num;
        
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            count=0;
            
            for(int i:nums)
                if(i<=mid) count++;
            
            if(count<=mid)
                low=mid+1;
else
{
    
        num=mid;
    high=mid-1;
}
            
            
        }
        
        
        return num;
        
    }
};
