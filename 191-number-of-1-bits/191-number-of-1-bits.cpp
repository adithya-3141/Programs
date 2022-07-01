class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        uint32_t a = 1;
        
        while (n != 0){
            count += n&a;
            n = n>>1;
        }
        
        return count;
    }
};