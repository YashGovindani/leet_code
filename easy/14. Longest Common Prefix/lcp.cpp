class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        int n = a.size();
        int small = 201;
        for(auto &e : a) small = min(small, (int)e.size());
        string ans = "";
        for(int j = 0 ; j  < small; j++){
            char ch = a[0][j];
            for(int i = 0 ; i < n ; i++){
                if(ch != a[i][j]) return ans;
            }
            ans += ch;
        }
        return ans;
    }
};