#include <bits/stdc++.h>
using namespace std;

//Dutch National Flag Algorithm

void sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {

        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
}

int main()
{

    int arr[] = {0, 1, 1, 2, 0, 1, 1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n);

    for (int x : arr)
        cout << x << " ";
}