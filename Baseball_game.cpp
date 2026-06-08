#include <iostream>

#include <vector>

using namespace std;

int baseball_game(vector<string> ops) {

    vector<int>ans;


    for (int i = 0 ; i<ops.size();i++) {

        if (ops[i] == "5" || ops[i] == "2") {

            int convert = stoi(ops[i]);

            ans.push_back(convert);

        }

        if (ops[i] == "C") {

            ans.pop_back();

        }

        if (ops[i] == "D") {

           int x =  ans.back() * 2 ;

            ans.push_back(x);




        }

        if (ops[i] == "+") {

            int y = ans[ans.size()-1] + ans[ans.size()-2];

            ans.push_back(y);

        }

    }

    int sum = 0;

    for (int i = 0 ; i <ans.size();i++) {

        sum+= ans[i];
    }


    return sum;


}


int main() {

    vector<string> ops = {"5","2","C","D","+"};

    cout << baseball_game(ops);

    return 0;
}