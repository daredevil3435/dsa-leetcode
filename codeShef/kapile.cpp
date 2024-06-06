#include <iostream>
#include <algorithm>
using namespace std;

double median(int arr[], int m, int n) {
    if(m%2 == 0) {
        // nth_element(arr.begin(), arr.begin() + n/2, arr.end());
        // nth_element(arr.begin(), arr.begin() + (n-1)/2, arr.end());
        return (double)(arr[(m-1) / 2] + arr[m/2]) / 2.0;
    } else {
        // nth_element(arr.begin(), arr.begin() + n/2, arr.end());
        return (double)(arr[m/2]);
    }
}

int image_labeler_task(int arr[], int &m, int n) {
    sort(arr, arr+m);
    int counter{};
    for(int i=n-1; i<1; i--) {
        counter += arr[i];
        m--;
    }
    
    counter += median(arr, m, n);
    return counter;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> m >> n;
        int arr[m];
        for(int i=0; i<m; i++)
            cin >> arr[i];
        
        cout << image_labeler_task(arr, m, n) << endl;
    }
    
    return 0;
}