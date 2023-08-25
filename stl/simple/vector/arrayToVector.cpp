#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10,33,43,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);


    vector<int> v(arr,arr+n);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}