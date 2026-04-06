//Count Elements with Strictly Smaller and Greater Elements
class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
// min_element() and max_element are functions from <algorithm>.Using this we can find the smallest iterator and largest iterator(pointer) in the array.Lekin hume smallest and largest value chahiye toh min_elemnt and max_element ke saamne * use kar diya(to get actual value) jiski help se iterator dereference hoke hume values de dega and not iterators
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int count = 0;
        for (int num : nums) {
            if (num > min && num < max) {
                count++;
            }
        }
        return count;
    }
};