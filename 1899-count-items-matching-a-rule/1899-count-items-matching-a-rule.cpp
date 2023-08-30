class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int key=0;
        if(ruleKey=="type"){
            key=0;
        }
        if(ruleKey=="color"){
            key=1;
        }
        if(ruleKey=="name"){
            key=2;
        }
        int count=0;
        for(vector<string>v:items){
            if(v[key]==ruleValue){
                 count++;
            }
        }
       return count; 
    }
};