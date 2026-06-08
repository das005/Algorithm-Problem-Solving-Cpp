#include <iostream>

#include <vector>

using namespace std;

int harmonious_subsequence(vector<int>nums) {

    int maxLen = 0;

    for (int i = 0 ;i<nums.size();i++) {

        for (int j = i+1;j<nums.size() ; j++) {

            if (abs(nums[i]-nums[j])==1) {

                int count = 0;

                for (int k = 0 ; k<nums.size();k++) {

                    if (nums[k] == nums[i] || nums[k] == nums[j]) {

                        count++;

                    }

                }

                maxLen = max(maxLen,count);

            }

        }



    }

    return maxLen;

}



int main(){

    vector<int> nums = {1,3,2,2,5,2,3,7};

    cout << harmonious_subsequence(nums);

    return 0;


}