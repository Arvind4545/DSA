//The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.
//Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.
#include<iostream> 
#include<vector>

using namespace std; 

int maximumProfit(vector<int>& prices)
{
    int mxp = 0; 

    for(int i = 1; i < prices.size(); i++)
    {
        if(prices[i - 1 ] < prices[i]) // If today's stock is higher than the Previous Day's Stock Price... sell it & buy the stock on the same day ...else don't sell it 
            mxp = mxp + (prices[i] - prices[i-1]); 
    }

    return mxp; 
}

int main()
{
    vector<int> prices = {4, 2, 2, 2, 4}; 

    int iRet = maximumProfit(prices);

    cout<<"Maximum Profit earned is: "<<iRet; 
    return 0; 
}

// Time Complexity: O(N) 
// Space Complexity: O(1)