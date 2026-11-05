class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return false;
        int sum=0;
        for(auto i:arr){
            sum+=i;
        }
        int req=0;
        if(sum%3!=0){
            return false;
        }
        req=sum/3;
        int total=0;
        int count=0;
        for(int i=0;i<n;i++){
            total+=arr[i];
            if(total==req){
                total=0;
                count++;
            }
        }
        if(count>=3){
            return true;
        }else{
            return false;
        }
        
    }
    
};