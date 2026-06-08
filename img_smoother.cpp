#include <iostream>

#include <vector>

using namespace std;

vector<vector<int>> img_smoother(vector<vector<int>>img,int row , int col) {

    vector<vector<int>>ans(row,vector<int>(col));

    for (int i = 0 ; i<img.size();i++) {

        for (int j = 0 ; j<img[0].size();j++) {

            int sum = 0 ,  count = 0;

            sum+= img[i][j];
            count++;

            //top

            if (i-1 >= 0) {

                sum+= img[i-1][j];

                count++;

            }

            //bottom

            if (i+1 <=2) {

                sum+= img[i+1][j];
                count++;

            }

            // left

            if (j-1 >=0) {

                sum+= img[i][j-1];
                count++;

            }

            //right

            if (j+1 <=2) {

                sum+= img[i][j+1];
                count++;

            }

            // up left

            if (i-1 >= 0 && j-1 >=0){

                sum+= img[i-1][j-1];
                count++;

            }

            // up right

            if (i-1 >=0 && j+1<=2){

                sum+= img[i-1][j+1];
                count++;

            }

            // down left

            if (i+1 <=2 && j-1 >=0) {

                sum+= img[i+1][j-1];
                count++;

            }

            // down right

            if (i+1 <=2 && j+1 <= 2) {

                sum+= img[i+1][j+1];
                count++;

            }

            int avg = sum/count;

            ans[i][j] = avg;




        }



    }

    return  ans;


}

int main() {

   vector<vector<int>> img = {
       {1,1,1},
       {1,0,1},
       {1,1,1}

   };

    vector<vector<int>> result = img_smoother(img,3,3);

    for (int i =0 ; i< result.size();i++) {

        for (int j =0 ; j<result[0].size();j++) {

            cout  << " " << result[i][j];

        }

    }


    return 0;

}