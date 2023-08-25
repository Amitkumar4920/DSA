#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1={2,45,3,4,5,33,4};
    list<int> l2={878,3,1,2,3,};

    l1.merge(l2);
    l1.sort();
    l1.reverse();
    l1.unique();
    for(auto x:l1){
        cout<<x<<" ";
    }
    
    return 0;
}