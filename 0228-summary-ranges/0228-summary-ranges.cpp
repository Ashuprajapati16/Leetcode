class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();
        if(n==0)return ans;
         int start=nums[0];
         for(int i=0;i<n;i++){
            int last=nums[i];
            if(i>0 && nums[i]==nums[i-1]+1){
                last=nums[i];
            }else if(i>0){
                if(nums[i-1]==start){
                    ans.push_back(to_string(start));
                }else{
                    ans.push_back(to_string(start)+"->"+to_string(nums[i-1]));
                }
                start=nums[i];
            }
        }
        if(nums[n-1]==start){
            ans.push_back(to_string(start));
        }else{
            ans.push_back(to_string(start)+"->"+to_string(nums[n-1]));
        }
        return ans;
    }
};