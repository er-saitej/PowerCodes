/*
    author: Sai Tej Sunkara
    topic: STL Stack
    complexity: O(1)
    analysis: O(n!) > O(2^n) > O(n^2) > O(n*log.n) > O(n) > O(log.n) > O(1)
*/

#include<bits/stdc++.h>
#include<stack>
#define int long long int // 9e18 - 9 million million million
#define endl "\n"
using namespace std;

void displayStack(stack<int> &stk) {
    cout<<"Displaying Stack"<<endl;
    while(!stk.empty()) {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;
}

int solve() {
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);

    displayStack(stk);    
    return 0;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0); // For taking bulk input and produce bulk output for saving time.
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test = 1;
    cin>>test;
    while(test--) {
        cout<<endl<<solve()<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}