class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> x(n);
        for(int i = 0; i < n; i++){
            x[i] = nums[nums[i]];
        }
        return x;
    }
};
