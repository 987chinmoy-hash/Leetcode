class Solution {
public:
    int f(vector<int>& nums, int pages){
        int stud = 1,pagesstud= 0;
        for(int i =0;i<nums.size();i++){
            if(pagesstud + nums[i] <= pages){
                pagesstud +=nums[i];
            }
            else{
                stud++;
                pagesstud = nums[i];
            }
        }
        return stud;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            int d = f(nums,mid);
            if(d>k) low = mid +1;
            else high = mid-1;
        }
        return low;
        
    }
};