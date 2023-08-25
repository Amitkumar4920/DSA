#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &v){
    v.push_back(10);
    v.push_back(20);
}

int main()
{
    vector<int>v{445,4};
    fun(v);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}