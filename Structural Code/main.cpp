/*
    author: Sai Tej Sunkara
    topic: C++ Data Structures
    complexity: O(1)
    analysis: O(n!) > O(2^n) > O(n^2) > O(n*log.n) > O(n) > O(log.n) > O(1)
*/

#include<bits/stdc++.h>
#define int long long int // 9e18 - 9 million million million
#define endl "\n"
using namespace std;

int solve(int n) {
    return n;
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
        cout<<solve(INT_MAX)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}