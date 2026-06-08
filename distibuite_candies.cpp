#include <iostream>

#include <vector>

using namespace std;

int distribute_candies(vector<int>candyType) {

    int candy_limit = candyType.size() /2;

    int count = 1;

    for (int i = 1 ; i<candyType.size();i++) {

        if (candyType[i-1] != candyType[i]) {

            count++;

        }

    }

    if (count <= candy_limit){

        return count;

    }

    return count;



}


int main(){

    vector<int> candyType = {1,1,2,2,3,3};

    cout << distribute_candies(candyType);

    return 0;

}