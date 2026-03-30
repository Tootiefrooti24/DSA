//Largest number at least twice of others
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxVal = INT_MIN;
        int maxIndex = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > maxVal){
                maxVal = nums[i];
                maxIndex = i;
            }
        }
        for(int i = 0; i < n; i++){
            if(i != maxIndex && maxVal < 2 * nums[i]){
                return -1;
            }
        }

        return maxIndex;
    }
};