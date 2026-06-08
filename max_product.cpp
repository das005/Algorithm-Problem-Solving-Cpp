#include <iostream>

#include <vector>

using namespace std;

int max_products(vector<int>nums) {

    int largest = 0;

    int sec_largest =0;

    int third_largest = 0;

    for (int i =1 ; i<nums.size();i++) {

        int curr = nums[i];


        if (third_largest == 0) {

            third_largest = curr;

        }






    }

    return third_largest * sec_largest * largest;



}

int main() {

    vector<int> nums = {1,2,3,4};

    cout << max_products(nums);

    return 0;

}