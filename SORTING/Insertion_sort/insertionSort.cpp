#include<bits/stdc++.h>
using namespace std;

void Isort(int arr[], int n){
    for(int i =1 ; i< n ; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
               arr[j+1] = arr[j];
               j--;
        } 

        arr[j+1] = key;
    }
}

int main(){

    int arr[] = {40,30,20,10,60,70,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Isort(arr,n);

    for(auto x :arr){
        cout << x << " ";
    }

}

////stable
// O(n^2) 