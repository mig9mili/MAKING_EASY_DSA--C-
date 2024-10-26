#include<bits/stdc++.h>
using namespace std;


int getMinDiff(int arr [], int n ){

    sort(arr , arr+n);
    int res  = INT_MAX;

    for(int i = 1 ; i < n ; i++){

        res = min(res , arr[i] - arr[i-1]);
    }

    return res;
}

int main(){
    	int n;
        int arr[n];

        cin >> n;
           
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	}
	cout << endl ;

	int ans =  getMinDiff(arr, n);
    cout << " min diff : " << ans ;
	return 0;

  
}