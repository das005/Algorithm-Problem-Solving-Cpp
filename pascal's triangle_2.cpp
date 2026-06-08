#include <iostream>

#include <vector>

using namespace std;

vector<int> pascal_triangle(int row_index) {

    vector<vector<int>> result;

    for (int i = 0 ; i<=row_index;i++) {

        vector<int> current;

        for (int j = 0 ; j<=i ; j++) {

            if (j == 0 || j == i) {

                current.push_back(1);

            }

            else {

                current.push_back(result[i-1][j-1] + result[i-1][j]);

            }



        }

        result.push_back(current);



    }

    return result[row_index];


}


int main() {

    int row_index = 3;

    vector<int> result = pascal_triangle(row_index);

    for (int i =0 ; i<result.size();i++) {

        cout << result[i];

    }



    return 0;


}