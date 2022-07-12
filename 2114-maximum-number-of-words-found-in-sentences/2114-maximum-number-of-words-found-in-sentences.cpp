class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for (int i=0; i<sentences.size(); i++){
            int words = 0;
            for (int z = 0; z<sentences[i].length(); z++){
                if (sentences[i][z] == ' '){
                    words += 1;
                }
            }
            words += 1;
            
            if (words > max){
                max = words;
            }
        }
        
        return max;
    }
};