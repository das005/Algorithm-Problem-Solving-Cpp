#include <iostream>

#include <vector>

using namespace std;

vector<int> range_sum(vector<int>nums) {

    vector<int> prefix;

    for (int i = 0 ; i<nums.size();i++) {

        int sum = 0;

        for (int j =0 ; j<=i;j++) {

            sum+= nums[j];

        }

        prefix.push_back(sum);

    }

    return prefix;

}

int main() {

    vector<int> nums = {-2,0,3,-5,2,1};

    vector<int> result = range_sum(nums);

    for (int i = 0 ; i<result.size();i++) {

        cout  << " " << result[i];

    }

    return 0;

}