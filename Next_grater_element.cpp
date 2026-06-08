#include <iostream>

#include <vector>

using namespace std;

vector<int> next_grater_element(vector<int> num1, vector<int> num2) {

    vector<int> ans;

    for (int i = 0 ; i<num1.size();i++) {

        for (int j =0 ; j<num2.size();j++) {

            if (num1[i] == num2[j]) {

                bool found = false;

                for (int k = j+1 ; k<num2.size(); k++){

                    if (num2[k] > num1[i]) {

                        found = true;

                        ans.push_back(num2[k]);

                        break;

                    }

                }

                if (found == false) {

                    ans.push_back(-1);

                }

            }
        }
    }

  return ans;

}

int main() {

    vector<int> num1 = {4,1,2};

    vector<int> num2 = {1,3,4,2};

    vector<int> result = next_grater_element(num1,num2);

    for (int i =0 ; i< result.size();i++) {

        cout << result[i];

    }

    return 0;

}