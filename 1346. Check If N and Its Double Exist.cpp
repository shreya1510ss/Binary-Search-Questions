

class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int high;
        int low;
        int mid;
        
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<0)
            { low=0;
            high=i-1;
            }
            else
            {
                low=i+1;
                high=arr.size()-1;
            }
            
            while(low<=high)
            {
                mid=low+(high-low)/2;
                
                if(arr[mid]==arr[i]*2)
                    return true;
                else if(arr[mid]<arr[i]*2)
                    low=mid+1;
                else
                    high=mid-1;
            }
            
        }
        
        
        
        return false;
        
        
    }
};
