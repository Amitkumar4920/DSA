#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }

            char top = st.top();
            st.pop();
            if ((s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s="{({})}";
    bool ans=isBalanced(s);
    cout<<ans;

    return 0;
}