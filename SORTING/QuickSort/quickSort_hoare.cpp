#include <bits/stdc++.h>

using namespace std;

int iHoarePartition(int arr[], int l, int h)
{
    int Pivot = arr[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < Pivot);

        do
        {
            j--;
        } while (arr[j] > Pivot);

        return j;

        swap(arr[i], arr[j]);
    }
}

void QuickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = iHoarePartition(arr , l ,h);   
        QuickSort(arr , l , p);
        QuickSort(arr , p+1 , h);
    }
}

int main(){
    int arr[] = {5,3,4,1,2,7,8,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr , 0 , n-1);

}