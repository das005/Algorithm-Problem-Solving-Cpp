#include <iostream>

#include <vector>

using namespace std;

vector<int> plus_one(vector<int> digits) {

    int n = digits.size();

    for (int i = n-1 ; i>=0 ; i--) {

        if (digits[i] == 9) {

            digits[i] = 0;

        }

        else if (digits[i] < 9) {

            digits[i] = digits[i] + 1;

            return digits;

        }

    }

    vector<int> ans (n+1,0);
    ans[0] = 1;
    return ans;


}

int main() {

    vector<int> digits = {9,9};

    vector<int> result = plus_one(digits);

    for (int i = 0 ; i<result.size();i++) {

        cout << " " << result[i];
    }


    return 0;

}