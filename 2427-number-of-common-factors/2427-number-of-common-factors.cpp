class Solution {
public:
    int commonFactors(int a, int b) {
        int mx=max(a,b);
        int mi=min(a,b);
        int count=0;
        for(int i=mi;i>0;i--){
            if(mx%i==0&&mi%i==0){
                count++;
            }
        }
        return count;
        
    }
};