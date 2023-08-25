#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    m.insert({10,20});
    m[5]=900;
    m.insert({120,220});
    cout<<m.size()<<endl;

    for(auto it:m){
        cout<<it.first<<"   "<<it.second<<endl;
    }

    //or

    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<"   "<<(*it).second<<endl;
    }

    //find

    if(m.find(10)==m.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"found"<<endl;
    }

    for(auto it=m.find(10);it!=m.end();it++){
         cout<<(*it).first<<"   "<<(*it).second<<endl;
    }

    //count

    if(m.count(2)==0){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}