class Solution {
public:
    int trap(vector<int>& height) {
        
        int result = 0;
        int block = 0;
        
        int displacement = 0;
        int initial = height[0];
        int n = height.size();
        
        for (int i = 1 ; i<n; i++){
            if (height[i] < initial){
                block += height[i];
                displacement += 1;
            }
            
            else if (height [i] > initial){
                result += (initial*displacement)- block;
                initial = height[i];
                displacement = 0;
                block = 0;
            }
            
            else {
                
                initial = height[i];
                // do nothing, this part will be counted in backward iteration also
                // to prevent overcounting we leave this part
            }
        }
        
        initial = height[n-1];
        displacement = 0;
        block = 0;
        
        for (int i = n-2 ; i>=0; i--){
            if (height[i] < initial){
                block += height[i];
                displacement += 1;
            }
            
            else if (height [i] >= initial){
                result += (initial*displacement)- block;
                initial = height[i];
                displacement = 0;
                block = 0;
            }
            
            
        }
        
        
        return result ;
        
        
        
    }
};