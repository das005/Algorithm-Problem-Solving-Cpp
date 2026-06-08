#include <iostream>

#include <vector>

using namespace std;

vector<vector<int>> pascal_triangle(int num_rows) {

    vector<vector<int>> result;

    for (int i = 0 ; i<num_rows;i++) {

        vector<int> current;

        for (int j =0 ; j<=i; j++) {

            if (j == 0 || j == i) {

                current.push_back(1);

            }

            else {

                current.push_back(result[i-1][j-1] + result[i-1][j]);

            }

        }

        result.push_back(current);

    }

    return result;

}



int main() {

    int num_rows = 5;

    vector<vector<int>> result = pascal_triangle(num_rows);

    for (int i = 0; i < result.size(); i++) {

        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }


    return 0;

}
