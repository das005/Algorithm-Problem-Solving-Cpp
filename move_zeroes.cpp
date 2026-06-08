#include <iostream>

#include <vector>

using namespace std;

vector<int> move_zeroes(vector<int> nums) {

    for (int i = 0 ; i<nums.size();i++) {

        for (int j = i+1 ; j<nums.size();j++) {

            int temp = nums[i];

            if (nums[i] == 0) {

                if (nums[j]!= 0) {

                    nums[i] = nums[j];

                    nums[j] = temp;

                }


            }

        }

    }

    return nums;

}

int main() {

    vector<int> nums = {0,1,0,3,12};

    vector<int> result = move_zeroes(nums);

    for (int i = 0 ;i<result.size();i++) {

        cout << " " << result[i];

    }


    return 0;

}