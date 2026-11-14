class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>s;
         int abhi=0;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
            if(arr[i]==0){
                    abhi++;
                }
            }

        for(int i=0;i<n;i++){
            if(arr[i]%2==0&&arr[i]!=0){
                int n=arr[i]/2;
                if(s.find(n)!=s.end()){
                    return true;
                }
            }
        }  
        if(abhi==1)return false;
        if(abhi>=1)return true; 
        return false; 
    }
};