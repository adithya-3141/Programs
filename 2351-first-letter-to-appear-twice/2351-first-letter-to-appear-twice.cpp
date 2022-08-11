class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> frequency(123, 0);
        
        int n = s.length();
        int index;
        
        for (int i=0; i<n; i++){
            index = s[i];
            
            if (frequency[index] == 1){
                return s[i];
            }
            else{
                frequency[index] += 1;
            }
        }
        
        
        return s[0];
        
    }
};