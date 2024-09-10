#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,5,6,7,1,4};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v){
        cout<<x<<" ";
    }
}