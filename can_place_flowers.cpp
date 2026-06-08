#include <iostream>

#include <vector>

using namespace std;

bool can_place_flower(vector<int>flowerbed , int n) {

    int count = 0;

    for (int i =0 ; i<flowerbed.size();i++) {

        int left = i-1;

        int right = i+1;

        int curr = flowerbed[i];


        if (i == 0) {

            if (curr == 0 && flowerbed[right] == 0) {

                flowerbed[i] = 1;
                count++;

            }

        }

        else if (i == flowerbed.size()-1) {

            if (curr == 0 && flowerbed[left] == 0) {

                flowerbed[i] = 1;
                count++;

            }

        }


        else {

            if (curr == 0 && flowerbed[left] == 0 && flowerbed[right] == 0) {

                flowerbed[i] = 1;

                count++;

            }

        }





    }

    if (count >= n) {

        return true;

    }
    else {

        return false;

    }


}


int main() {

    vector<int> flowerbed = {1,0,0,0,1};

    int n = 2;

    cout << can_place_flower(flowerbed,n);

    return 0;

}