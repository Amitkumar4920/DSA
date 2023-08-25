#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(20);

    auto it=s.lower_bound(15);

    if(it!=s.end()){
        cout<<(*it)<<" ";
    }
    else{
        cout<<"given element us greater than the largest";
    }

    auto it1=s.upper_bound(15);    
    if(it1!=s.end()){
        cout<<(*it1)<<" ";
    }
    else{
        cout<<"given element us greater than the largest";
    }
    return 0;
}