class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int pivot=nums.size()-1;
        int low=0;
        int high=nums.size()-1;
        int mid;
        
        
        //finding the pivot element
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if( mid<(nums.size()-1) && nums[mid]>nums[mid+1])
            {
                pivot=mid;
                break;
            }
            
            
            else if(mid>0 && nums[mid]<nums[mid-1])
            {
                pivot=mid-1;
                break;
            }
            
            else if(nums[mid]<nums[0])
                high=mid-1;
            else if(nums[mid]>=nums[0])
                low=mid+1;
        }
        
        
        
        //initialising low and high
        if(target>=nums[0])
        {
            low=0;
            high=pivot;
        }
        
        else if(target<nums[0])
        {
            low=pivot+1;
            high=nums.size()-1;
        }
        

        // searching for the tagret element
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                low=mid+1;
            else 
                high=mid-1;
        }

                return -1;
        
    }
        
};
