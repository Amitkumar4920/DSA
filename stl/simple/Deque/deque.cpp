#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq={10,20,30};
    dq.push_back(3);
    cout<<dq.front()<<" "<<dq.back()<<endl;

    //or
    auto it=dq.begin();
    it++;
    dq.insert(it,45);
    dq.pop_front();;
    cout<<dq.size()<<endl;

    for(auto x:dq){
        cout<<x<<" ";
    }

    return 0;
}