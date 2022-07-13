class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string result;
        for (int i=0; i<n; i++){
            if (command[i] == 'G'){
                result.push_back('G');
            }
            
            else if (command[i] == '(' && command[i+1] == ')'){
                result.push_back('o');
                i+=1;
            }
            
            else{
                result.push_back('a');
                result.push_back('l');
                i+=3;
            }
        }
        
        return result;
    }
};