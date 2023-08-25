#include <bits/stdc++.h>
using namespace std;

void printPrevGreater(int arr[], int n) {
    stack<int> s;
    s.push(arr[0]);
    
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
        
        int pg;
        if (s.empty()) {
            pg = -1;
        } else {
            pg = s.top();
        }
        
        cout << pg << " ";
        s.push(arr[i]);
    }
}

int main() 
{ 
    int arr[] = {20, 30, 10, 5, 15};
    int n = 5;
    printPrevGreater(arr, n);
    return 0; 
}


//O(n)