#include <iostream>

#include <vector>

using namespace std;

int longest_continuous_increasing_subsequence(vector<int>nums){

    int length = 1;

    for (int i =0 ; i<nums.size()-1;i++) {

        if (nums[i] < nums[i+1]) {

            length++;

        }

        else {

            return length;


        }

    }

    return length;


}

int main(){

    vector<int> nums = {1,3,5,4,7};

    cout << longest_continuous_increasing_subsequence(nums);

    return 0;

}