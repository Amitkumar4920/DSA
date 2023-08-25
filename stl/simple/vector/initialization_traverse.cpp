#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    //or
    cout<<endl;

    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}