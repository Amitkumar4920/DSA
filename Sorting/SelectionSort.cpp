#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind=i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind=j;
                swap(arr[min_ind], arr[i]);
            }
        }
    }
}

int main()
{
    int arr1[] = {10, 34, 2, 3, 34, 3, 4};

    SelectionSort(arr1, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
