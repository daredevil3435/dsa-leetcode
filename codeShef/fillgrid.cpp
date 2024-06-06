#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,m;
	    cin>>n>>m;
	    if(n%2 == 0 && m %2 == 0){
	        cout<<0<<"\n";
	    }
	    else if(n % 2 == 1 && m % 2 == 0){
	        cout<<m<<"\n";
	    }
	    else if(n % 2 == 0 && m % 2 == 1){
	        cout<<n<<"\n";
	    }
	    else{
	        cout<<m + n - 1<<"\n";
	    }
	}
	return 0;
}