#include <bits/stdc++.h>
using namespace std;

int getCeiling(set<int> &s, int x)
{
    auto it = s.lower_bound(x);
    if (it == s.end())
    {
        return INT_MIN;
    }
    else
    {
        return *it;
    }
}

int getFloor(set<int> &s, int x)
{
    auto it = s.lower_bound(x);
    if (it == s.begin())
    {
        return INT_MIN;
    }
    else
    {
        // Decrement the iterator to get the element that is less than or equal to x
        --it;
        return *it;
    }
}

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(3);
    s.insert(20);
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    int result = getCeiling(s, 11);
    cout << "Ceiling of 10: " << result << endl;

    int result1 = getFloor(s, 11);
    cout << "floor of 10: " << result1 << endl;

    return 0;
}
