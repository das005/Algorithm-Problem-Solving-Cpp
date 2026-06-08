#include <iostream>

#include <vector>

using namespace std;

vector<int> merge_short(vector<int>num1 , vector<int> num2 , int n , int m) {

    int i = m-1;

    int j = n-1;

    int k = m+n-1 ;

    while (j>=0) {

        if (i>=0 && num1[i] > num2[j]){

            num1[k] = num1[i];

            i--;

        }

        else {

            num1[k] = num2[j];

            j--;



            }

        k--;

        }

    return num1;




    }





int main() {

    vector<int> num1 = {1,2,3,0,0,0};

    vector<int> num2 = {2,5,6};

    int m = 3;

    int n = 3;

    vector<int> result = merge_short(num1,num2,n,m);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }



    return 0;

}