//Single Number without XOR
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int number=0;
        for(int i=0;i<n;i++){
        int count=1;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j] && i!=j){
                    count++;
                }
            }
            if(count==1){
                number=nums[i];
            }
        }
        return number;
    }
};