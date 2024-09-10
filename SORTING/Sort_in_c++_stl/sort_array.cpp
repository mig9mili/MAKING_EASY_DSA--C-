#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 3, 2, 5, 4};
    int  n  = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int x :arr){
        cout<<x<<" ";
    }
    sort(arr,arr+n,greater<int>());
    cout<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }
}