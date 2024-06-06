#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> v(3); //vector declaration with size
    vector<int> v1;   //vector declaration without size 

    cout<<v.capacity()<<endl;   //capacity is not equal to size

    v.resize(10);
    cout<<v.capacity()<<endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // int pos = v.begin();
    // cout<<pos<<endl;

    // v.push_back // used when element is added in the end

    // v.insert(position,element)  used when element is added at particular position
    v.begin();

}