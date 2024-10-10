#include<bits/stdc++.h>
using namespace std;


int hoarePartition(int arr[] , int l , int h){

    int Pivot = arr[l];
    int i = l-1;
    int j = h+1 ;
   
   while(true){
     
     do{
        i++;
     }while(arr[i] < Pivot);

     do{
        j--;
     }while(arr[j]>Pivot);


     if(i>=j) return j;

     swap(arr[i],arr[j]);
   }

}

int main(){

    int arr[] = {5,3,8,4,2,7,1,10};

    int n =  sizeof(arr)/sizeof(arr[0]);

    hoarePartition(arr , 0 , n-1);

    for(int x:arr){
        cout << x << " ";
    }

}