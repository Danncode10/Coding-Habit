class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        //Starts at last index
        for(int i = n - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i] += 1;
                return digits; //Exit na sa loop kase walang carry
            }
            digits[i] = 0;
            //Loop back, may increment ung next index
        }
        //pag nag exit loop, ibig sabihin add sa begin, ex 999 + 1 = 1000, size = 4,
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
