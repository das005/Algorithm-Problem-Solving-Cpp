#include <iostream>

#include <vector>

using namespace std;

int array_partition(vector<int>nums,int sum) {

     vector<pair<int,int>> arr_pair;

     //store pair

     for (int i =0 ; i< nums.size();i++) {

          for (int j =i+1 ; j<nums.size();j++) {

               arr_pair.push_back(make_pair(nums[i],nums[j]));

          }

     }

     for (int k = 0 ; k<arr_pair.size();k++) {

          sum+= min(arr_pair[k].first,arr_pair[k].second);

     }

     return sum;


}

int main(){

     vector<int> nums = {1,4,3,2};

     int sum = 0;

     cout << array_partition(nums,sum);

     return 0;

}