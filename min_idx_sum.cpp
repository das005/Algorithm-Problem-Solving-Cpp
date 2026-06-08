#include <iostream>

#include <vector>

using namespace std;

vector<string> min_sum_idx(vector<string>list1 , vector<string>list2) {

    vector<string>ans;

    int min_val = INT_MAX;

    for (int i =0 ; i<list1.size();i++) {

        for (int j = 0 ; j<list2.size();j++) {

            if (list1[i] == list2[j]) {

                int sum = 0;

                sum = sum + (i+j);

              if (sum < min_val) {

                  min_val = sum;

                  ans.push_back(list1[i]);

              }




            }

        }



    }


    return ans;



}


int main() {

    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};

    vector<string> list2 = {"KFC","Shogun","Burger King"};


    vector<string> result = min_sum_idx(list1,list2);

    for (int i = 0 ; i<result.size();i++) {

        cout << result[i];

    }

    return 0;

}