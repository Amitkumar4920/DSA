#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(30);
    l.pop_front();
    l.push_back(23);

    auto it=l.begin();

    it++;
    it=l.insert(it,14);
    l.remove(30);

    auto it2=l.begin();
    l.erase(it);
    for(auto x: l){
        cout<<x<<' ';
    }

    return 0;
}