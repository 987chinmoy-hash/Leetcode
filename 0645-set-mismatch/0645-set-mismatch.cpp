class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeating=-1,missing=-1;
        vector<int> hash(nums.size()+1,0);

        for(int i =0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i =1;i<=nums.size();i++){
            if(hash[i] == 2) repeating =i;
            else if(hash[i] == 0) missing = i;

            if(repeating !=-1 && missing !=-1){
                break;
            }
        }
       

        
        return {repeating,missing};
    }
};