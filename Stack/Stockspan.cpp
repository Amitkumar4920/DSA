//Brute force

// vector<int> findStockSpans(vector<int>& prices) {
//     // Write your code here
   
//     int n=prices.size();
//      vector<int> ans(n);

//     for(int i=0;i<n;i++){
//         int count=1;

//         for(int j=i-1;j>=0;j--){
//             if(prices[j]<prices[i]){
//                 count++;
//             }
//             else{
//                 break;
//             }
//         }
//         ans[i]=count;
//     }
//     return ans;
// }


//optimise

vector<int> findStockSpans(vector<int>& prices) {
    // Write your code here
    int n=prices.size();
    
    vector<int> stockSpan(n);
    stockSpan[0]=1;

    stack<int> st;
    st.push(0);

    for(int i=1 ; i<n ; i++){
        while(!st.empty() and prices[st.top()] <= prices[i]){
            st.pop();
        }
        if(st.empty()){
            stockSpan[i]=i+1;
        }
        else{
            stockSpan[i]=i-st.top();
        }
        st.push(i);
    }
    return stockSpan;
}
