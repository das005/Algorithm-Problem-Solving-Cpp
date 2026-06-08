#include <iostream>

#include <vector>

using namespace std;

int assign_cookies(vector<int>g, vector<int>s , int ans) {

  for (int i = 0 ; i<g.size();i++) {

      for (int j = 0 ; j<s.size();j++) {

          if (s[j] >= g[i]) {

             ans++;

              break;



          }

      }

  }

    return ans;



}


int main()
{
    vector<int> g = {1, 2, 3};

    vector<int> s = {1, 1};

    int ans = 0;

    cout << assign_cookies(g,s,ans);

    return 0;
}
