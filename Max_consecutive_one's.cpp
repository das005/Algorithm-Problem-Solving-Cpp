#include <iostream>

#include <vector>

using namespace std;

int max_consecutive(vector<int>nums) {

    int count = 0;

    int max_i = 0;

    for (int i = 0 ;i<nums.size();i++) {

        if (nums[i] == 1) {

            count++;

        }

        else {

            count = 0;

        }

        max_i = max(max_i,count);

    }

    return max_i;


}


int main() {

    vector<int> nums = {1,1,0,1,1,1};

    cout << max_consecutive(nums);

    return 0;
}