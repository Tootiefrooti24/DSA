//In-place solution chahiye tha therefore  we initialised k=0 to make it act like an index.First scanning through the loop and checking the condition and at nums[k] pe nums[i] ko store karna and then increamenting k to store values at next indexes will solve the in-place problems.
//Remove element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;  
            }
        }
        return k;
    }
};