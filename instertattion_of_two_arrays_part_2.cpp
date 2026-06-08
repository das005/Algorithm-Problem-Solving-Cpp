#include <iostream>

#include <vector>

using namespace std;

vector<int> intersection_of_array_part_2(vector<int>num1 , vector<int>num2) {

    vector<int> result;

    for (int i = 0; i<num1.size();i++) {

        for (int j = 0 ; j<num2.size();j++) {

            if (num1[i] == num2[j]) {

                result.push_back(num1[i]);

                break;

            }

        }

    }

    return result;

}

int main() {

    vector<int> num1 = {1,2,2,1};

    vector<int> num2 = {2,2};

    vector<int> result = intersection_of_array_part_2(num1,num2);

    for (int i =0 ; i<result.size();i++) {

        cout << " " << result[i] ;

    }

    return 0;

}