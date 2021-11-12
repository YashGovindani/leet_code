class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(haystack.size() < needle.size()) return -1;
        int i, j, k, ep;
        for(i = 0, ep = haystack.size() - needle.size(); i <= ep; i++)
        {
            for(j = i, k = 0; k < needle.size() && haystack[j] == needle[k]; j++, k++);
            if(k == needle.length()) return i;
        }
        return -1;
    }
};