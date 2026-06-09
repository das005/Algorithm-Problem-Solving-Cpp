#include <iostream>

#include <vector>

using namespace std;

//Solved in O(log n) runtime complexity.

int binary_search(vector<int>nums , int target) {

    int left = 0;

    int right = nums.size()-1;

    while (left <= right) {

        int mid = (left+right)/2;

        if (nums[mid] == target) {

            return mid;
        }

        if (nums[mid] < target) {

            left = mid+1;

        }

        if (nums[mid] > target) {

            right = mid-1;

        }

    }

    return -1;

}


int main() {

    vector<int> nums = {-1,0,3,5,9,12};

    int target = 9;

    cout << binary_search(nums,target);

    return 0;

}