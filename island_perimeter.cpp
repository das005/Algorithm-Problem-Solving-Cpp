#include <iostream>

#include <vector>

using namespace std;

int island_perimeter(vector<vector<int>>grid) {

    int perimeter = 0;

    int row = grid.size();

    int col = grid[0].size();

    for (int i =0 ; i<grid.size();i++) {

        for (int j = 0 ; j<grid[0].size();j++) {

            if (grid[i][j] == 1) {

                //check top

                if (i-1 < 0 || grid[i-1][j] == 0) {

                    perimeter++;

                }

                //check bottom

                if (i+1 >=row || grid[i+1][j] == 0) {

                    perimeter++;

                }


                //check left

                if (j-1 < 0 || grid[i][j-1] == 0) {

                    perimeter++;

                }

                //check right

                if (j+1 >= col || grid[i][j+1] == 0) {

                    perimeter++;

                }

            }


        }

    }

    return perimeter;

};

int main() {

    vector<vector<int>> grid = {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}

    };

    cout << island_perimeter(grid);


    return 0;

}