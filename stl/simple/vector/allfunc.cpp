#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,30,4,5,2,1,2};
    v.pop_back();
    for(int x:v)
    {
        cout<<x<<" ";
        //last element is not printed
    }
    cout<<endl;

    cout<<v.front()<<endl;
    cout<<v.back();

    ///

    auto it=v.insert(v.begin(),100);
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,300);

//
    vector<int> v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+3);
    cout<<endl;

    for(int x:v2){
        cout<<x<<" ";
    }
    return 0;
}