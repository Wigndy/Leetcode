class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        /*uint32_t result = 0;
        for (int i = 0; i < 32; i ++)
        {
            result <<= 1;
            result = result | (n & 1);
            n >>= 1;
        }
        return result;*/
        n = (((0xffff0000 & n) >> 16) | ((0x0000ffff & n) << 16));
        n = (((0xff00ff00 & n) >> 8) | ((0x00ff00ff & n) << 8));
        n = (((0xf0f0f0f0 & n) >> 4) | ((0x0f0f0f0f & n) << 4));
        n = (((0xCCCCCCCC & n) >> 2) | ((0x33333333 & n) << 2));
        n = (((0xAAAAAAAA & n) >> 1) | ((0x55555555 & n) << 1));
        return n;
    }
};