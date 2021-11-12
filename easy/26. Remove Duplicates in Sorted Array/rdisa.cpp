class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, n = nums.size();
        if( n == 0) return 0;
        for(i = 0 , j = 1; j < nums.size(); ++j)
        {
            if(nums[i] != nums[j]) nums[++i] = nums[j];
        }
        return i + 1;
    }
};