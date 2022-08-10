class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums;
        int rem;
        int a = 0; // a and b are the min numbers
        int b = 0;
        
        while (num != 0){
            rem = num%10;
            nums.push_back(rem);
            num = num / 10;
        }
        
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size(); i++){
            if (i%2 == 0){
                a = (a*10)+nums[i];
            }
            
            else{
                b = (b*10)+nums[i];
            }
        }
        
        return a+b;
    }
};