class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        int n = s.length();
        
       
        
        for (int i=0; i<n; i++){
            if (s[i] == '(' ||s[i] == '{' || s[i] == '[' ){
                stk.push(s[i]);
            }
            
            else if (!stk.empty()){
                
               if ((s[i] == ')' && stk.top() == '(') || (s[i] == '}' && stk.top() == '{') || (s[i] == ']' && stk.top() == '[')) {
                    stk.pop();
                }
                
                else{
                return false;
                }
            
            }
        else 
            return false;
        }
            
        
        
        
     return stk.empty();   
        
        
    }
};