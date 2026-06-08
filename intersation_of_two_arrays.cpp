#include <iostream>

#include <vector>

using namespace std;

vector<int> intersection_array(vector<int>num1 , vector<int>num2 ) {

    vector<int> result;

    for (int i =0 ; i<num1.size();i++) {

        for (int j = 0 ; j<num2.size();j++) {

            if (num1[i] == num2[j]) {

                bool duplicate = false;

                for (int k = 0 ; k<result.size(); k++) {

                    if (result[k] == num1[i]) {

                        duplicate = true;

                    }

                }

                if (duplicate == false) {

                    result.push_back(num1[i]);

                }



            }



        }

    }

    return result;


}


int main(){

    vector<int> num1 = {1,2,2,1};

    vector<int> num2 = {2,2};

    vector<int> result = intersection_array(num1,num2);

    for (int i = 0 ; i<result.size();i++) {

        cout << result[i];

    }

    return 0;

}