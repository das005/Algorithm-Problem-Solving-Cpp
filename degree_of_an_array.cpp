#include <iostream>

#include <unordered_map>

#include <vector>

using namespace std;

int degree_of_array(vector<int>nums) {

    unordered_map<int,int>frq;

    unordered_map<int,int>first_element;

    unordered_map<int,int>last_element;

    for (int i = 0 ; i<nums.size();i++) {

        frq[nums[i]]++;

      if (first_element.find(nums[i]) == first_element.end()) {

          first_element[nums[i]] = i;

      }

        // store last idx;
        last_element[nums[i]] = i;

    }

    for (auto it : frq) {

        int element = it.first;
        int frequeny = it.second;

        if (frequeny == )

    }




}



int main() {

    vector<int> nums = {1,2,2,3,1};

    return 0;

}