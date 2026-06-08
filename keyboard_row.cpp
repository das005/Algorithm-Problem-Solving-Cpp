#include <iostream>

#include <vector>

using namespace std;

vector<string> keyboard_row(vector<string>words) {

    vector<string> ans;

    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl";
    string row3 = "zxcvbnm";



    for (int i = 0 ; i<words.size();i++) {

        bool valid = true;

        for (int j = 0 ; j<words[i].size();j++) {

            if (row1.find(tolower(words[i][0]))!= string::npos) {

                if (row1.find(tolower(words[i][j]))== string::npos){

                    valid = false;

                }

            }

            if (row2.find(tolower(words[i][0])) != string::npos){

                if (row2.find(tolower(words[i][j])) == string::npos) {

                    valid = false;

                }

            }

            if (row3.find(tolower(words[i][0])) != string::npos) {

                if (row3.find(tolower(words[i][j])) == string ::npos) {

                    valid = false;

                }

            }




        }

        if (valid == true) {

            ans.push_back(words[i]);

        }

    }

    return ans;


}


int main() {

    vector<string> words = {"Hello","Alaska","Dad","Peace"};

    vector<string> result = keyboard_row(words);

    for (int i = 0 ; i<result.size();i++) {

        cout   << " " << result[i];

    }

    return 0;

}