#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector <int>& prices){
  int min_price = prices[0];
  int min_index =0 ;
  int max_price = prices[0];
  int max_index = 0;
  int max_profit;
  for(int i=0; i<prices.size(); i++){

    if(prices[i]<min_price){
        min_price = prices[i];
        min_index = i;
    }

    if(prices[i]>max_price){
        max_price = prices[i];
        max_index = i;
    }


  }

  if(max_index>min_index){
    max_profit = prices[max_index] - prices[min_index];
  }

  else
  {
    int min_price = prices[0];
    int min_index = 0;
    int last_index = prices.size()-1;

    for(int i=1; i<prices.size(); i++){
      if(prices[i]<min_price){
        min_price = prices[i];
        min_index = i;
        
    }
    // if (min_price = prices[last_index]){
    //     min_price = prices[0];
    //     min_index = 0;
    // }

    }
   //solved prices= [2,4,1] test case fail
    if(min_index == last_index){
      min_price = prices[0];
      min_index = 0;


      for(int i=1; i<last_index; i++){
        if(prices[i]<min_price){
            min_price = prices[i];
            min_index = i;
        }
     }
    }

   //solved prices = [3,2,5,6,0,3] test case fail

 
    cout<<min_price<<endl;

    int max_element = prices[0];
    int max_index = 0;

    for(int i=1; i<prices.size();i++)
    {
    if(prices[i]>max_element)
    {
        max_element = prices[i];
        max_index = i;
    }
    }


    int max_price = prices[min_index];

    for(int i=min_index; i<prices.size(); i++){
     if(prices[i]>max_price){
        max_price = prices[i];
    }
    }

    if(min_index == last_index-1 && max_element>max_price){
     min_price = prices[0];
     min_index = 0;
     
     for(int i=1; i<(last_index-1);i++){
        if(prices[i]<min_price){
            min_price = prices[i];
            min_index = i;
        }
     }

     max_price = prices[min_index];
     for(int i=min_index; i<last_index; i++){
        if(prices[i]>max_price){
            max_price = prices[i];
            max_index = i; 
        }
     }


    }
  
     max_profit = max_price - min_price;
    }

 return max_profit;

}

int main(){
    vector <int> prices;

    int input;

    while(cin>>input){
        prices.push_back(input);
    }

    int ans = maxProfit(prices);
    cout<<ans<<endl;

   return 0;
}