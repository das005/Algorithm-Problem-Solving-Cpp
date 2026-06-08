#include <iostream>

#include <vector>

using namespace std;

bool contains_duplicate(vector<int>nums) {

    for (int i = 0 ; i< nums.size();i++) {

        for (int j = i+1 ; j<nums.size();j++) {
            if (nums[i] == nums[j]) {

                return true;

            }



        }

    }

    return false;

}


int main() {

    vector<int> nums = {1,2,3,4};

    cout << contains_duplicate(nums);


    return 0;


}