class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int pivot_index;
        int low=0;
        int high=nums.size()-1;
        int mid;
        int start=nums[0];
        
        if(nums.size()==1)
        { 
            if(nums[0]==target)
                return 0;
            else 
                return -1;
        }
        
        else if(nums[0]<nums[nums.size()-1])
        {
            pivot_index=nums.size()-1;
            
            
        }
        
        else
        {
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(nums[mid]>nums[mid+1])
            {
                pivot_index=mid;
                break;
            }
            
            else if(nums[mid]<nums[mid-1])
            {
                pivot_index=mid-1;
                break;
            }
            
            else if(nums[mid]<start)
                high=mid-1;
            
            else if(nums[mid]>=start)
                low=mid+1;
            

        }
            
        }
        
        if(target<start)
        {
            low=pivot_index+1;
            high=nums.size()-1;
        }
        
        else
        {
            low=0;
            high=pivot_index;
        }
        
        
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]>target)
                high=mid-1;
            
            else
                low=mid+1;
        }
        
        
        return -1;
        
    }
};
