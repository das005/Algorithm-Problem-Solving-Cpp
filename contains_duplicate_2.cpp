#include <iostream>

#include <vector>

using namespace std;

bool contains_duplicate_part_2(vector<int>nums , int k) {

    for (int i =0 ; i<nums.size();i++) {

        for (int j = i+1 ; j<nums.size();j++) {

            if (nums[i] == nums[j] && abs(i-j) <=k) {

                return true;

            }

        }

    }

   return false;

}

int main() {

    vector<int> nums = {1,2,3,1};

    int k = 3;

    cout << contains_duplicate_part_2(nums,k);

    return 0;

}