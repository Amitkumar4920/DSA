#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,30,2};
    for(int &x:v){
        x=6;
    }

    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}