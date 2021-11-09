class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long reversed = 0;
        int tmp = x;
        for(reversed = 0, tmp = x; tmp; tmp /= 10) reversed = (reversed*(long)10) + (long)(tmp%10);
        return x == static_cast<int>(reversed);
    }
};