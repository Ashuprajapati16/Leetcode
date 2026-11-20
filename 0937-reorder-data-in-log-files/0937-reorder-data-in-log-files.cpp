class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        int n=logs.size();
        vector<pair<string,string>>dig;
         vector<pair<string,string>>log;
        for(int i=0;i<n;i++){
             bool flag=false;
             string s1="";
             string s2="";
            int m=logs[i].size();
            for(int j=0;j<m;j++){
                if(flag==false){
                    if(logs[i][j]==' '){      
                        flag=true;
                        continue;            
                    }
                    s1+=logs[i][j];
                }
                else s2+=logs[i][j];
            }
            if(s2[0]>='a'&&s2[0]<='z')dig.push_back({s2,s1});
            else log.push_back({s2,s1});
        }
        sort(dig.begin(),dig.end());
        vector<string>ans;
        for(auto &i:dig){
            ans.push_back((string)i.second+' '+(string)i.first);
        }
        for(auto &i:log){
            ans.push_back((string)i.second+' '+(string)i.first);
        }
        return ans;
    }
};