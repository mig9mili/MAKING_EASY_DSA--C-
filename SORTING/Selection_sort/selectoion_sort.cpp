#include <bits/stdc++.h>
using namespace std;

//optimal also  find min ele and swap with intial pos / we can also maintina temp arr but it not optinmal sol 
// this every less mem write algo , not stable algo exmaple 2, 3, 4 ,5,5 
void selectionSort(int arr[], int n){

 for(int i =0 ; i< n-1; i++){
     int min_pos=i;
     for(int j = i+1; j<n ; j++){
        if(arr[j]< arr[min_pos]){
            min_pos= j;
        }
     }
     swap(arr[i],arr[min_pos]);
 }


}
int main(){
  	int a[] = {2, 1, 3, 4};
	selectionSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}

// o(n^2) 