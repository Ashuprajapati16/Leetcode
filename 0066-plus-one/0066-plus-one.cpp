class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int right = n - 1;
        int left = 0;
        while(right > left){
            swap(digits[left], digits[right]);
            right--;
            left++;
        }
        int carry = 1; 
        for(int i = 0; i < n; i++){
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if(carry > 0){
            digits.push_back(carry);
        }
        right = digits.size() - 1;
        left = 0;
        while(right > left){
            swap(digits[left], digits[right]);
            right--;
            left++;
        }
        return digits;
    }
};