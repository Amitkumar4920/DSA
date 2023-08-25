#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{2,4,1,43,2,433};
    v.erase(v.begin());
    v.erase(v.begin(),v.end()-1);


    for(auto x:v){
        cout<<x<<"  ";
    }
    return 0;
}