#include<iostream>
#include<algorithm>
using namespace std;

struct Job{
    int start,finish,profit;
};

//utility function that is used for sorting events acc to finish time
bool jobComparator(Job s1, Job s2){
    return (s1.finish<s2.finish);
}

//find latest job in sorted array that doesn't conflict with job[i].If there is no compatible job then return -1
int latestNonConflict(Job arr[],int i){
    for(int j=i-1; j>=0; j--){
        if(arr[j].finish<=arr[i-1].start)
          return j;
    }
    return -1;
}

//recursive function that returns the max possible profit given array of jobs
int findMaxProfitRec(Job arr[], int n){
    //base case
    if(n==1)
      return arr[n-1].profit;
    
    //find profit when current job is included
    int inclProf = arr[n-1].profit;
    int i = latestNonConflict(arr,n);
    if(i!=-1){
        inclProf += findMaxProfitRec(arr,i+1);
    }
    int exclProf = findMaxProfitRec(arr,n-1);

    return max(inclProf, exclProf);

}

//main function
int findMaxProfit(Job arr[], int n){
    sort(arr,arr+n,jobComparator);

    return findMaxProfitRec(arr,n);
}

int main(){
    Job arr[] = {{3,10,20},{1,2,50},{6,19,100},{2,100,200}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The optimal profit is "<<findMaxProfit(arr,n);
    return 0;
}