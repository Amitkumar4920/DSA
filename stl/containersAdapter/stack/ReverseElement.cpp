#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int ele)
{
    if (s.empty())
    {
        s.push(ele);
        return;
    }

    int topele = s.top();
    s.pop();
    insertAtBottom(s, ele);
    s.push(topele);
}

void reverse(stack<int>& s)
{
    if (s.empty()) { return; }

    int element = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, element);  // Changed "insertAtButton" to "insertAtBottom"
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(333);

    while (!s.empty())  // Changed the condition to "!s.empty()"
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
