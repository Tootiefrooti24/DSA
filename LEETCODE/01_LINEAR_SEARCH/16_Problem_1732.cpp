//Find the Highest Altitude

//More than linear search it is about running sum and tracking maximum.The alternate way using which i solved it was using loops and traversing through the loop and updating gain[i] =gain[i]+ gain[i+1] and altitude[i+1]=gain[i] and then checking the max value among them but as it was running sum and checking maximum value ,the optimal solution is below one
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