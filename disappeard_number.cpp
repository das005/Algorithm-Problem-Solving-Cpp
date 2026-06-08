#include <iostream>

#include <vector>

using namespace std;

vector<int> disappeared_number(vector<int> nums , int correct_idx) {

    vector<int> ans;

    for (int i = 0 ; i<nums.size();i++) {

        while (nums[i] != nums[correct_idx]) {

             correct_idx = nums[i] -1;

            swap(nums[i] ,nums[correct_idx]);

            if (nums[i] == nums[correct_idx]) {

                break;

            }

        }

    }

    for (int i = 0 ; i< nums.size();i++) {

        if (nums[i] != i+1) {

            ans.push_back(i+1);

        }

    }

    return ans;

}

int main() {

    vector<int> nums = {4,3,2,7,8,2,3,1};

    int correct_idx = 0;

    vector<int> result = disappeared_number(nums,correct_idx);

    for (int i =0 ; i<result.size();i++) {

        cout  << " "  << result[i];

    }

    return 0;

}