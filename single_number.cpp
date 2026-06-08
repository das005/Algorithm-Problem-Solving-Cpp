#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int single_number(vector<int> &nums) {

    int i;

    sort(nums.begin(),nums.end());


    for ( i = 1 ; i<nums.size();i++) {

        if (nums[i] != nums[i-1]) {

            return nums[i-1];

        }

    }

    return nums[i-1];

}

int main() {

    vector<int> nums = {2,2,1};

    cout << single_number(nums);


    return 0;

}