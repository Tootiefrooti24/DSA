//Find the Highest Altitude
//More than linear search it is about running sum and tracking maximum
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int current=0;
       int maxAltitude=0;
       for(int val:gain){
        current+=val;
        maxAltitude=max(maxAltitude,current);
       }
       return maxAltitude;
    }
};