#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int min = 10e6;
    int max = 0;

    for(int i=0; i<n; i++){
        min = fmin(min, a[i]);
        max = fmax(max, a[i]);

    }

    cout<<min<<endl;
    cout<<max<<endl;








    return 0;
}