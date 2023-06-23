#include <bits/stdc++.h>
using namespace std;

void bubleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr1[] = {10, 34, 2, 3, 34, 3, 4};

    bubleSort(arr1, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
