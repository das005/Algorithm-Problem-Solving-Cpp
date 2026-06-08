#include <iostream>

#include <vector>

using namespace std;

int majority_element(vector<int>nums) {

    int divide = nums.size() /2;

    for (int i = 0 ; i<nums.size();i++) {

        int count = 0;

        for (int j =0 ; j<nums.size();j++)
        {
            if (nums[i] == nums[j]){

                count++;

            }
        }

             if (count > divide) {


                return nums[i];

            }


        }



    return -1;

}

int main() {

    vector<int> nums = {3,2,3,3,3};

    cout << majority_element(nums);

    return 0;

}