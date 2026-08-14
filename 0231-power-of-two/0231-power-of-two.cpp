class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        long long x;
        x = log2(n);
        return n == pow(2,x);
    }
};