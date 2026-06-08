#include <iostream>

#include <vector>

using namespace std;

vector<vector<int>> matrix_reshape(vector<vector<int>>mat,int r ,int c) {

    int m = mat.size();

    int n = mat[0].size();

    vector<vector<int>> ans(r,vector<int>(c));

    if (m*n != r*c) {

        return mat;

    }

    else {

        int row = 0;

        int col = 0;


        for (int i =0 ; i<mat.size();i++) {

           for (int j = 0 ; j<mat[0].size();j++) {

                ans[row][col] = mat[i][j];

               col++;


               if (col == c) {

                   col = 0;

                   row++;

               }

           }

       }



    }

    return ans;



}


int main(){

    vector<vector<int>> mat = {
        {1,2},
        {3,4}

    };

    vector<vector<int>> result = matrix_reshape(mat,1,4);

    for (int i = 0 ; i<result.size();i++) {

        for (int j =0 ; j<result[0].size();j++) {

            cout << result[i][j];

        }

    }

    return 0;

}