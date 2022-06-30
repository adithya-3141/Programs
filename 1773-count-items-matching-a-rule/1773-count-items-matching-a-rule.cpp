class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string, int> rulemap;
        rulemap["type"] = 0;
        rulemap["color"] = 1;
        rulemap["name"] = 2;
        
        int checkindex = rulemap[ruleKey];
        int count = 0;
        
        for (int i=0; i<items.size(); i++){
            if (items[i][checkindex] == ruleValue){
                count+= 1;
            }
        }
        
        return count;
        
    }
};