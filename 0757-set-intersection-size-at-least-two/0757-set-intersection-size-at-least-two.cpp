class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int result=2;
        sort(intervals.begin(), intervals.end(),[](vector<int>& a, vector<int>& b) {
        if(a[1]==b[1]){
            return a[0]>b[0];
        }else{
            return a[1]<b[1];
        }
    });
            
            int second=intervals[0][1];
            int fisrt=second-1;
        for(int i=1;i<intervals.size();i++){
                int l=intervals[i][0];
                int r=intervals[i][1];
                if(fisrt >= l) {
                continue;
            }

                else if(l<=second){
                    result+=1;
                    fisrt=second;
                    second=r;
                }else{
                    result+=2;
                    fisrt=r-1;
                    second=r;
                }
        }
        return result;
        
    }
};