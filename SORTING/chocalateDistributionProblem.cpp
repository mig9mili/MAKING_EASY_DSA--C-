#include<bits/stdc++.h>
using namespace std;


int chocoDistribution(int arr[],int n , int m){
    if (m > n){
      return -1;
    }
    sort(arr , arr+n);
    int minm = arr[m-1] - arr[0];
    for( int i =1  ; i+m-1 < n ; i++){
        minm =  min (minm ,  (arr[i+m-1]-arr[i]));
    }

    return minm;
}
int main(){
      int arr[] = {7,3,2,4,9,12,56};
      int n = sizeof(arr) / sizeof(arr[0]);
      int m = 3;

    int min =  chocoDistribution(arr, n, m);

    cout << "min diff is : " << min <<endl;
    
}