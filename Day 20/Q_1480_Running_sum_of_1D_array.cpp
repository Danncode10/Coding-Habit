
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> x(n);

        int sums = 0;
        for(int i = 0; i < n; i++){
            x[i] = sums + nums[i];
            sums += nums[i];
        }

        return x;
    }
};
