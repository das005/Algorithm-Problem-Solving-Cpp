#include <iostream>

#include <vector>

using namespace std;

int range_addition(vector<vector<int>>ops , int m , int n) {

    vector<vector<int>>M(m,vector<int>(n,0));

    for (int i = 0 ; i<ops.size();i++) {

        for (int j = 0 ; j<ops[0].size();j++) {

            int ai = ops[i][0];

            int bi = ops[i][1];


            for (int x = 0 ; x<ai ; x++) {

                for (int y =0 ; y<bi ; y++) {

                    M[x][y]++;

                }



            }



        }

    }






};

int main(){

    vector<vector<int>>ops = {
        {2,2},
        {3,3}
    };

    return 0;

}