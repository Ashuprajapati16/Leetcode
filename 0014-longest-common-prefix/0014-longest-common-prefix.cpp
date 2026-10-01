class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
         int len=min(strs[0].size(),strs[n-1].size());
         string str="";
         int i=0;
             while(i<len){
                 if(strs[0][i]==strs[n-1][i]){
                    str+=strs[0][i];
                    i++;
                 }else{
                    break;
                 }
            }
            return str;
    }
};