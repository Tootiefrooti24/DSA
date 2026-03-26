//Problem 34 on leetcode should be solved using binary search(otherwise errors will occur cuz the leetcode compiling system wants binary search solution only) but it can be solved using linear search also.
//Linear search solution of Problem 34 

//Find first and last position of element in a sorted array
//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.If target is not found in the array, return [-1, -1].

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter numbers for array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = {-1, -1};

    int target;
    cout << "Enter target: ";
    cin >> target;

    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            ans[0] = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if(nums[i] == target) {
            ans[1] = i;
            break;
        }
    }

    cout << "The index of first and last occurrence of the digit is: "<<ans[0] << " and " << ans[1] << endl;

    return 0;
}