#include <bits/stdc++.h>
using namespace std;

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
    cout<<endl;

    auto it = s.find(10);

    //Found

    if (it == s.end())
        cout << "Not Found"<<endl;
    else
        cout << "Found"<<endl;


    //Count
    if(s.count(310)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


    //erase
    auto it2=s.find(20);
    s.erase(it2);

    for(auto x:s){
        cout<<x<<" ";
    }
    return 0;
}