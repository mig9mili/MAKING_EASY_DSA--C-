#include<bits/stdc++.h>
using namespace std;



//Lamuto Partition : - here  pivot element is last element 


int LomutoPartion(int arr[] , int l , int h){

    //swap(arr[pivot] , arr[h]) //if pivote in not the last element 

    int pivot = arr[h];
    int i = l-1;
    for(int j = l ; j<=h-1 ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i] , arr [j]);
        }
    }
    swap(arr[i+1] , arr[h]);
   

   return i+1;

}

int main(){
    int arr[] = {10,30,50,90,80,40,60};
    int n = sizeof(arr)/sizeof(arr[0]);

    LomutoPartion(arr , 0 , n-1);

    for(int x:arr){
        cout << x << " "; 
    }

    return 0;

}

// i case the pivot element is not last element than swap the pivot element to last of the array and contiune the lomuto logic 

//