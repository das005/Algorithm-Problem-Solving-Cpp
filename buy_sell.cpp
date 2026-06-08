#include <iostream>

#include <vector>

using namespace std;

int buy_sell(vector<int>prices ) {

   int profit = 0;

  int max_profit = 0;

    for (int i = 0; i<prices.size();i++) {

        int buy = prices[i];

        for (int j= i+1 ; j<prices.size();j++) {

            int sell = prices[j];

            profit = sell - buy;

           max_profit =  max(max_profit,profit);

        }

    }

    return max_profit;

}


int main() {

    vector<int> prices = {7,1,5,3,6,4};

    cout << buy_sell(prices);

    return 0;

}