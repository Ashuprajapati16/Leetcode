class Solution {
public:
    int countDigits(int num) {
        string s =to_string(num);
        int count=0;
        for(int i=0;i<s.size();i++){
            if(num%(s[i] - '0')==0)count++;
        }
        return count;
    }
};