class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currsm = nums[0]; // kadane algo
        int maxsum = nums[0];
        if (n > 1) {
            for (int i = 1; i < n; i++) {
                currsm += nums[i];
                if(currsm<=nums[i]){
                    currsm=nums[i];
                }
                   if(currsm>=maxsum){
                    maxsum=currsm;
                   } 
                
            }
        } else {
            return nums[0];
        }
        return maxsum;
    }
};