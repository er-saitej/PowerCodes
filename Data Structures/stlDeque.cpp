/*
    author: Sai Tej Sunkara
    topic: STL Doubly ended queue
    complexity: O(1)
    analysis: O(n!) > O(2^n) > O(n^2) > O(n*log.n) > O(n) > O(log.n) > O(1)
*/

#include<bits/stdc++.h>
#include<deque>
#include<array>
#define int long long int // 9e18 - 9 million million million
#define endl "\n"
using namespace std;

void displayDeque(deque<int> dq) {
    cout<<"Displaying Deque"<<endl;
    for(auto x: dq) {
        cout<<x<<" ";
    }
    cout<<endl;
}

int solve() {
    array<int, 6> arr = {1,2,4,3,6,5};

    deque<int> dq1;
    deque<int> dq2(4,100);
    deque<int> dq3(arr.begin(), arr.end());
    deque<int> dq4(dq3);

    displayDeque(dq2);
    displayDeque(dq3);
    displayDeque(dq4);

    dq1.push_back(10);
    dq1.push_front(20);
    dq1.push_front(30);
    dq1.push_back(40);
    dq1.push_back(60);
    cout<<endl<<"Size of Deque 1 is "<<dq1.size()<<endl; 
    displayDeque(dq1);
    cout<<"Element at back "<<dq1.back()<<endl;
    cout<<"Element at front "<<dq1.front()<<endl;
    dq1.pop_back();
    displayDeque(dq1);
    dq1.pop_front();
    displayDeque(dq1);

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