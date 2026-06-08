#include <iostream>

#include <vector>

using namespace std;

int summery_ranges(vector<int>nums, int start , int end) {

    vector<string> ans;


    for (int i = 0; i<nums.size();i++) {

        if (nums[i+1] == nums[i] +1) {

            // noting to do;

        }


        else {

            if (start == end) {

                ans.push_back(to_string(start));

            }

            ans.push_back(to_string(start)+ "->" + to_string(end));

            break;

        }
    }



}

int main(){

    vector<int> nums = {0,1,2,4,5,7};

    return 0;

}