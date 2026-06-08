#include <iostream>

#include <vector>

using namespace std;

vector<int> calculate_two_sum(vector<int>&nums , int target) {

    for (int i = 0 ; i<nums.size(); i++) {

        for (int j = 0 ; j<i; j++) {

            if (nums[i] + nums[j] == target) {

                return {i,j};

            }

        }


    }

    return {};

}

int main() {

    vector<int> nums = {2,7,11,15};

    int target = 9;

    calculate_two_sum(nums,target);

    vector<int> result = calculate_two_sum(nums, target);

    cout << result[1] << " " << result[0];



    return 0;
}