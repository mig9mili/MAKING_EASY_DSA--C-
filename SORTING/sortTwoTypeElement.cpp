#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{

    int i = -1;
    int j = n;
    while (true)
    {

        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] >= 0);

        while (i > j)
            return;
        swap(arr[i], arr[j]);
    }
}

int main()
{

    int arr[] = {13, -12, 18, -10};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n);

    for (int x : arr)
        cout << x << " ";
}