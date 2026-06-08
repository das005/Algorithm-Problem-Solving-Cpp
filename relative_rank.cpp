#include <iostream>

#include <vector>

using namespace std;

vector<string> relative_rank(vector<int>score) {

    vector<string> ans;

    int rank = 1;

    for (int i = 0 ; i<score.size();i++) {

        for (int j = i+1 ; j<score.size() ; j++) {

            if (score[i] > score[j]) {

                if (rank == 1) {

                    ans.push_back("Gold medal");

                    rank++;

                }

                else if (rank == 2) {

                    ans.push_back("silver medal");

                    rank++;

                }

                else if (rank == 3) {

                    ans.push_back("bronze medal");

                    rank++;

                }

                else
                {
                    ans.push_back(to_string(rank));

                    rank++;

                }



            }

        }

    }

  return ans;

}


int main() {

    vector<int> score = {5,4,3,2,1};

    vector<string> result = relative_rank(score);

    for (int i = 0 ; i<result.size();i++) {

        cout  << " " << result[i];

    }

    return 0;

}