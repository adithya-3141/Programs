class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int result = 0;
        int n = operations.size();
        for (int i=0; i<n; i++){
            if (operations[i] == "X++" ||operations[i] == "++X" ){
                result += 1;
            }
            
           else{
               result -=1;
           }
        }
        
        return result;
        
    }
};