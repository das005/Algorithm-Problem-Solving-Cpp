#include <iostream>

#include <vector>

using namespace std;

int teemo_attacking(vector<int>timestamp , int duration) {

    int count = 0;


    for (int i =0 ; i<timestamp.size()-1;i++) {

        int gap = timestamp[i+1] - timestamp[i];

        if (gap >= duration) {

            count+= duration;

        }

        else {

            count+= gap;

        }




    }

    return count+= duration;



}

int main () {

    vector<int> timestamp = {1,4};

    int duration = 2;

    cout << teemo_attacking(timestamp,duration);



}