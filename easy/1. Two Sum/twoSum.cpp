class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        map<int,int>::iterator it;
        int i;
        i=-1;
        for(int &num : nums)
        {
            ++i;
            it=m.lower_bound(target-num);
            if(it!=m.end() && it->first == target-num) break;
            m[num]=i;
        }
        vector<int> v {it->second, i};
        return v;
    }
};