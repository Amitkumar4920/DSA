#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int>p1,pair<int,int>p2)
{
    return (p1.second>p2.second);
}


void printSortedByMarks(int roll[],int marks[],int n)
{
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++)
    {
        v.push_back({roll[i],marks[i]});
    }

    // sort(v.begin(),v.end(),mycmp);
    //or
    sort(v.begin(),v.end(),greater<pair<int,int>>());

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
}

int main(){

    int roll[]={101,103,105};
    int marks[]={80,70,90};

    int n=sizeof(roll)/sizeof(roll[0]);

    printSortedByMarks(roll,marks,n);

    //or

    
    
    return 0;
}