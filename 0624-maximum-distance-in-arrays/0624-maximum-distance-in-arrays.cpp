class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        vector<pair<int,int>> bigList;
        for (int i = 0; i < n; i++) {
            int biggest = arrays[i].back();
            bigList.push_back({biggest, i});
        }
        sort(bigList.rbegin(), bigList.rend());
        int answer = 0;
        for (int i = 0; i < n; i++) {
            int smallest = arrays[i][0];
            int biggest;
            if (bigList[0].second == i) {
                biggest = bigList[1].first;
            } else {
                biggest = bigList[0].first;
            }

            answer = max(answer, biggest - smallest);
        }

        return answer;
    }
};