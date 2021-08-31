class Solution {
public:
    int findMin(vector<int>& nums) 
    {
    
        int low=0;
        int high=nums.size()-1;
        int mid;
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(mid<nums.size()-1 && nums[mid]>nums[mid+1])
                return nums[mid+1];
            else if(mid>0 && nums[mid]<nums[mid-1])
                return nums[mid];
            else if(nums[mid]<nums[0])
                high=mid-1;
            else if(nums[mid]>=nums[0])
                low=mid+1;
            
            
        }
        
        
        return nums[0];
        
    }
};
