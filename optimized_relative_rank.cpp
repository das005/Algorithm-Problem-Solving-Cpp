#include <algorithm>
#include <iostream>

#include <vector>

using namespace std;

vector<string> relative_rank(vector<int>score) {

    vector<string>ans(score.size());

    vector<pair<int,int>> vp;

    int rank = 1;


for(int i = 0; i < score.size(); i++)
{

    vp.push_back({score[i], i});
}

    sort(vp.rbegin(),vp.rend());


    for (int i =0 ; i<score.size();i++) {

        if (rank == 1) {

            ans[vp[i].second] =  "gold_medal";

            rank++;


        }

       else if (rank == 2) {

            ans[vp[i].second] = "silver_medal";

           rank++;

        }

       else if (rank == 3) {

           ans[vp[i].second] = "bronze_medal";

           rank++;

        }

        else {

            ans[vp[i].second] = to_string(rank);

            rank++;


        }

    }


    return ans;

}


int main() {

    vector<int> score = {10,3,8,9,4};

    vector<string> result = relative_rank(score);

    for (int i =0 ; i<result.size();i++) {

        cout <<  " " << result[i];

    }

    return 0;

}