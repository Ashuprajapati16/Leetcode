class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int result = 0;

        sort(intervals.begin(), intervals.end(),
        [](vector<int>& a, vector<int>& b) {
            if(a[1] == b[1])
                return a[0] > b[0];
            return a[1] < b[1];
        });

        int first = -1, second = -1;

        for(int i = 0; i < intervals.size(); i++) {
            int l = intervals[i][0];
            int r = intervals[i][1];

            if(first >= l) {
                continue;
            }
            else if(second >= l) {
                result++;
                first = second;
                second = r;
            }
            else {
                result += 2;
                first = r-1;
                second = r;
            }
        }

        return result;
    }
};