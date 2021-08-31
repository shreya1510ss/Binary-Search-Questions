

class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        int low=1;
        int high=nums.size();
        int mid;
        int count;
        
        while(low<=high)
        {
            count=0;
            mid=low+(high-low)/2;
            
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=mid)
                    count++;
            }
            
            if(count==mid)
                return mid;
            
            else if(count>mid)
                low=mid+1;
    
            
            else if(count<mid)
                high=mid-1;
            
            
        }
        
        
            return -1;
        
        
        
        
    }
};
