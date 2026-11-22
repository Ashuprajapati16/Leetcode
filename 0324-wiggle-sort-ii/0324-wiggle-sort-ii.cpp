class Solution {
public:
    void wiggleSort(vector<int>& nums) {
         priority_queue<int> maxHeap;
        for (int& num : nums) {
            maxHeap.push(num);
        }

        for (int i = 1; i < nums.size(); i += 2) {
            nums[i] = maxHeap.top();
            maxHeap.pop();
        }
        for (int i = 0; i < nums.size(); i += 2) {
            nums[i] = maxHeap.top();
            maxHeap.pop();
        }
    }
};