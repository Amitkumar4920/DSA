#include<bits/stdc++.h>
using namespace std;

vector<int> getSmaller(int arr[],int n,int k)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<k){
            ans.push_back(arr[i]);
        }
    }
    return ans;

}
int main(){
    int arr[]={4,55,355,54,55};
    vector<int> res=getSmaller(arr,5,67);
    for(auto x:res){
        cout<<x<<"   ";
    }


    return 0;
}