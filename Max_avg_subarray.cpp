#include <iostream>

#include <vector>

using namespace std;

double max_avg_subarray(vector<int>nums , int k) {

    int max_val = INT_MIN;

    for (int i =0 ; i<=nums.size()-k;i++) {

        int curr_sum = 0;

        for (int j = i ; j<i+k;j++) {

            curr_sum+= nums[j];

        }

        if (curr_sum > max_val) {

            max_val = curr_sum;

        }

    }

    return (double)max_val/4;



}

int main() {

    vector<int> nums = {1,12,-5,-6,50,3};

    int k = 4;

    cout << max_avg_subarray(nums,k);

    return 0;

}