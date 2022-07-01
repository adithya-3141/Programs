class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        uint32_t a = 1;
        uint32_t b;
        
        for (int i=0; i<32; i++){
            b = n&a;
            b = b<<(31-i);
            result = result|b;
            n = n>>1;
        }
        
        return result;
    }
};