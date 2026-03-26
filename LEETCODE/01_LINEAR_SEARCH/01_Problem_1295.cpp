//Given an array nums of integers, return how many of them contain an even number of digits.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int count=0;
            while(num>0){
                num=num/10;
                count++;

            }
            if(count%2==0){
                even++;
            }
        }
        return even;
    }
};