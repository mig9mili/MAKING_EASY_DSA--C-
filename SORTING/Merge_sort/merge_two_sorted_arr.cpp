#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int m,int n){
    int i =0, j=0;
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            cout << arr1[i++] << " ";
        }
        else{
         cout << arr2[j++] <<" ";
        }  
    }
    while(i<m){
        cout << arr1[i++]<<" ";
    }
    while(j<n){
        cout << arr2[j++]<< " ";
    }
}
int main(){  
   

   // sorted arr
    int arr1[]={2,3,4,50};
    int arr2[]={30,40,50,60};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1,arr2,m,n);

}