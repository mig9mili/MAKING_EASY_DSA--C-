#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{

    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

int main()
{

    int a[] = {3, 2, 1, 4, 5};
    int n = 5;

    bubble_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; //
    }
}


//O(n)  time complexcity