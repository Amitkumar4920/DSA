#include <bits/stdc++.h>
using namespace std;
vector<int> maxOfSubarray(vector<int> arr, int n, int k)
{

    vector<int> ans;
    deque<int> dq;
    int i = 0, j = 0;
    while (j < n)
    {
        while (!dq.empty() && dq.back() < arr[j])
        {
            dq.pop_back();
        }

        dq.push_back(arr[j]);

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            ans.push_back(dq.front());

            if (arr[i] == dq.front())
            {
                dq.pop_front();
            }

            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> result = maxOfSubarray(arr, n, k);

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }

    return 0;
}