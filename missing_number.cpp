#include <algorithm>
#include <iostream>

#include <vector>

using namespace std;

int missing_number(vector<int>nums) {

    sort(nums.begin(),nums.end());

    for (int i = 0 ; i<nums.size()-1;i++) {

        if (nums[i+1] != nums[i]+1){

            return nums[i] + 1;

        }

    }

    return nums.size();

}

int main() {

    vector<int> nums = {3,0,1};

    cout << missing_number(nums);

    return 0;

}