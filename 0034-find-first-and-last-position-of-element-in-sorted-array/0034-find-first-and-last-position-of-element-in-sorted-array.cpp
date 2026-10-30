class Solution {
public:
    
    int searchInser(vector<int>& nums, int targ) {
        int low = 0;
        int high = nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>= targ){
                ans = mid;
                high = mid-1;

            }
            else{
                low = mid+1;
            }
        }
        return ans;
        }
    int searchInsert(vector<int>& nums, int targ) {
        int low = 0;
        int high = nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]> targ){
                ans = mid;
                high = mid-1;

            }
            else{
                low = mid+1;
            }
        }
        return ans;
        }    


    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = searchInser(nums,target);
        if(lb==nums.size() || nums[lb]!=target) return {-1,-1};
        return {lb,searchInsert(nums,target)-1};
     
    }
};