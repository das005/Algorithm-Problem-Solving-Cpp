#include <iostream>

#include <unordered_map>

#include <vector>

using namespace std;

int degree_of_array(vector<int>nums) {

    unordered_map<int,int>frq;

    unordered_map<int,int>first_element;

    unordered_map<int,int>last_element;

    int degree =0;

    int ans= 0;

    for (int i = 0 ; i<nums.size();i++) {

        frq[nums[i]]++;

        max(degree,frq[nums[i]]);

        // checking if the element is available in first element or not to prevent override issue

      if (first_element.find(nums[i]) == first_element.end()) {

          first_element[nums[i]] = i;

      }

        // store last idx;
        last_element[nums[i]] = i;

    }

    for (auto it : frq) {

        int element = it.first;
        int frequeny = it.second;

        if (frequeny ==  degree) {

            int length  = last_element[element] + first_element[element] +1;

            ans = min(ans,length);


        }

    }

    return ans;

}



int main() {

    vector<int> nums = {1,2,2,3,1};

    cout << degree_of_array(nums);

    return 0;

}