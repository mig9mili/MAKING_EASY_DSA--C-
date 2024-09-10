#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};


bool mycmp(Point p1,Point p2){

    if(p1.x == p2.x){
        return p1.y <p2.y;
    }
    else{
        return p1.x > p2.x;
    }
}

int main(){
    Point arr[] ={{3,11},{2,3},{3,10}};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,mycmp);
    for(auto i:arr){
        cout<<i.x<<" "<<i.y<<endl;
    }

}

//sort use quick sort internally time complexity is O(nlogn)