/*
    author: Sai Tej Sunkara
    topic: Priority Queue
    complexity: O(1)
    analysis: O(n!) > O(2^n) > O(n^2) > O(n*log.n) > O(n) > O(log.n) > O(1)
*/

#include<bits/stdc++.h>
#include<vector>
#include<array>
#include<queue>
#define int long long int // 9e18 - 9 million million million
#define endl "\n"
using namespace std;

class Compare {
    public:
        bool operator()(int a, int b) {
            if(a>2 & b>2) {
                return a>b;
            }
            else {
                return b>a;
            }
        }
};

void displayMaxHeap(priority_queue<int> &heap) {
    cout<<"Displaying max-heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void insertToMaxHeap(priority_queue<int> &heap, array<int, 6> &arr) {
    for(int i=0; i<arr.size(); i++) {
        heap.push(arr.at(i));
    }
}

void displayMinHeap(priority_queue<int, vector<int>, greater<int> > &heap) {
    cout<<"Displaying min-heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void insertToMinHeap(priority_queue<int, vector<int>, greater<int> > &heap, array<int, 6> &arr) {
    for(int i=0; i<arr.size(); i++) {
        heap.push(arr.at(i));
    }
}

void displayCustomHeap(priority_queue<int, vector<int>, Compare > &heap) {
    cout<<"Displaying custom-heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void insertToCustomHeap(priority_queue<int, vector<int>, Compare > &heap, array<int, 6> &arr) {
    for(int i=0; i<arr.size(); i++) {
        heap.push(arr.at(i));
    }
}

int solve() {
    array<int, 6> arr = {2,1,6,3,5,4};
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    priority_queue<int, vector<int>, Compare > customHeap;
    insertToMaxHeap(maxHeap, arr);
    displayMaxHeap(maxHeap);
    insertToMinHeap(minHeap, arr);
    displayMinHeap(minHeap);
    insertToCustomHeap(customHeap, arr);
    displayCustomHeap(customHeap);
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