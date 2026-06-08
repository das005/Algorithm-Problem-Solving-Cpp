#include <iostream>

#include <vector>

using namespace std;

int assign_cookies_2(vector<int>g , vector<int>s) {

    int i = 0;

    int j = 0;

    int ans = 0;

    while (i < g.size() && j < s.size()) {

        if (s[j] >= g[i]) {

            ans++;

            i++;

            j++;


        }

    }

    return ans;

}

int main() {

    vector<int> g = {1,2};

    vector<int> s = {1,2,3};

    cout  << "Answer is : " << assign_cookies_2(g,s);

    return 0;

}
