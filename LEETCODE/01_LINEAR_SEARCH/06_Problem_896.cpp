// An array is monotonic if it is either monotone increasing or monotone decreasing.Isiliye sirf ek loop traversing me hi ho gaya and no unnecessary nested looping is required.

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool isIncreasing = true;
        bool isDecreasing = true;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                isIncreasing = false;
            } 
            else if (nums[i - 1] < nums[i]) {
                isDecreasing = false;
            }
        }
        return isIncreasing || isDecreasing;
    }
};