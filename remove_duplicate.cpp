#include <iostream>

#include <vector>

using namespace std;

int remove_duplicate(vector<int>nums) {

    int k = 1;

    for (int i = 1; i<nums.size();i++) {

        if (nums[i] == nums[i-1]) {

            //ignore because curr and previous nums are same means it is duplicate
            // so no action.

        }

        else {

           nums[k] = nums[i];
            k++;

        }

    }


    return k;

}


int main() {

    vector<int> nums = {1,1,2};

    cout << remove_duplicate(nums);

    return 0;

}