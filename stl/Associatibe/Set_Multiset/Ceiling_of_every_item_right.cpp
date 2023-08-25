#include <bits/stdc++.h>
using namespace std;

void printCeiling(int arr[], int n)
{
    set<int> s;

    int res[n];
    for (int i = n - 1; i >= 0; i--)
    {
        auto it = s.lower_bound(arr[i]);
        if (it == s.end())
        {
            res[i] = -1;
        }
        else
        {
            res[i] = *it;
        }
        s.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {50, 20, 200, 100, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    printCeiling(arr, n);
    return 0;
}
