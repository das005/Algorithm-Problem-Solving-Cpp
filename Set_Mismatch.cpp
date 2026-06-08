#include <iostream>

#include <vector>

using namespace std;

vector<int> set_mismatch(vector<int>nums) {

    vector<int> ans;


    for (int i = 1 ;i <nums.size()-1;i++) {

        if (nums[i-1] == nums[i]) {

            ans.push_back(nums[i]);

            if (nums[i] +1 != nums[i+1])

                ans.push_back(nums[i]+1);

            break;

        }

    }

    return ans;



}

int main() {

    vector<int> nums = {1,2,2,4};

    vector<int> result = set_mismatch(nums);

    for (int i = 0 ; i<result.size();i++) {

        cout << " "  <<  result[i];

    }

    return 0;


}