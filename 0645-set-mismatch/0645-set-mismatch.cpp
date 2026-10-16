class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       long long n = nums.size();
       long long sA = (n*(n+1))/2;
       long long s2A= (n*(n+1)*(2*n+1))/6;
       long long s=0,s2=0;
       for(int i =0;i<n;i++){
            s += nums[i];
            s2 += (long long)nums[i]*nums[i];
       }
       long long a = s - sA;
       long long b = s2 - s2A;
       long long c = b/a;
       long long x = (a+c)/2;
       long long y = (c-a)/2;

        
        return {(int)x,(int)y};
    }
};