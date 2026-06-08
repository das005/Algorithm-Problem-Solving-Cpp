#include <iostream>

#include <vector>

using namespace std;

string longest_common_prefix(vector<string>str) {

    string ans = "";

    for (int i = 0 ; i<str[0].size(); i++) {

        for (int j = 1 ; j<str.size() ; j++) {

            if (str[0][i] !=str[j][i]) {

                return ans;

            }

        }

        ans+= str[0][i];



    }

    return ans;

}

int main() {

    vector<string> str = {"flower" , "flow" , "flight"};

    cout << longest_common_prefix(str);



    return 0;

}