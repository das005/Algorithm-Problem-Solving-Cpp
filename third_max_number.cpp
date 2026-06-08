#include <iostream>

#include <vector>

using namespace std;

int third_max_number(vector<int>nums) {



    int first_max = 0;
    int second_max = 0;
    int third_max = 0;


    for (int i = 0; i<nums.size();i++) {

        int curr = nums[i];

        if (curr > first_max){

            first_max = curr;

        }


        if (nums[i] < first_max) {

            second_max = nums[i];

        }

        if (nums[i] < second_max) {

            third_max = nums[i];

        }



    }

    return third_max;

}


int main() {

    vector<int> nums = {3,2,1};

    cout << third_max_number(nums);

    return 0;

}