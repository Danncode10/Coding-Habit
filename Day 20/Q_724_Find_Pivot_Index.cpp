class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        //Calculate sum of array
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }

        int sum_left = 0;
        int sum_right = 0;
        
        for(int i = 0; i < n; i++){
            sum_right = sum - (nums[i] + sum_left);

            if(sum_left == sum_right){
                return i;
            }

            sum_left += nums[i];
        }

    return -1;

    }
};
