class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int inccnt = 1, deccnt = 1;
        int mxcnt = 1, mncnt = 1;
        if(n==1||n==0)return n;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                inccnt++;
                deccnt = 1;
                mxcnt=max(mxcnt,inccnt);
            }
            else if(nums[i-1] > nums[i]) {
                deccnt++;
                inccnt = 1;
            }
            else {
                inccnt = 1;
                deccnt = 1;
            }
            mxcnt = max(mxcnt, inccnt);
            mncnt = max(mncnt, deccnt);
        }
        return max(mncnt,mxcnt);
    }
};