#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int a[] = {2, 1, 4, 5, 3, 8};

    bubble_sort(a, 6);
    for (int x=0; x < 6; x++)
    {
        cout << a[x] << " ";
    }
    return 0;
}