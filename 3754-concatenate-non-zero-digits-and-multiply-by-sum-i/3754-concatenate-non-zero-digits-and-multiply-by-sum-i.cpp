class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        string s=to_string(n);
        long long num=0;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';   
                if(s[i]>'0'&&s[i]<'10'){
                    num*=10;
                    num+=(s[i]-'0');
            } 
         }
         return 1LL*num*sum;
    }
};