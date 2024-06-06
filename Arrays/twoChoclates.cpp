#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        sort(prices.begin(), prices.end());


        if(money < prices[0]){
           return money;
        }
        else{
            int req_money = prices[0]+prices[1];

            if(money>req_money){
                return money-req_money;
            }
            else if(money==req_money){
                return 0;
            }
            else{
                return money;
            }
        }

        
    }
};

int main()
{
    Solution solution;

    // Example usage:
    vector<int> chocoPrices = {2, 5, 1, 3, 4};
    int availableMoney = 10;

    int maxChocolates = solution.buyChoco(chocoPrices, availableMoney);

    cout << "Maximum number of chocolates that can be bought: " << maxChocolates << endl;

    return 0;

    // return 0;
}