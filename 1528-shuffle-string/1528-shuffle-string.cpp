class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int, char> val;
        string result;
        
        for (int i=0; i<indices.size(); i++){
            val[indices[i]] = s[i];
        }
        
        for (int j=0; j<indices.size(); j++){
            result.push_back(val[j]);
        }
        
        return result;
    }
};