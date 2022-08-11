class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector <int> result;
        
        result.push_back(first);
        int element;
        for (int i=0; i<(encoded.size()); i++){
            element = result[i] ^ encoded[i];
            result.push_back(element);
        }
        
        return result;
    }
};