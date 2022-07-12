/*
    author: Sai Tej Sunkara
    topic: STL Arrays
    complexity: O(1)
    analysis: O(n!) > O(2^n) > O(n^2) > O(n*log.n) > O(n) > O(log.n) > O(1)
*/

#include<bits/stdc++.h>
#include<array>
#define int long long int // 9e18 - 9 million million million
#define endl "\n"
using namespace std;

void updateArrayCBV(array<int, 6> arr, int i, int num) {
    cout<<"Calling update function by call by value. Array not updated."<<endl;
    arr.at(i) = num;
}

void updateArrayCBR(array<int, 6> &arr, int i, int num) {
    cout<<"Calling update function by call by reference. Array is updated."<<endl;
    arr.at(i) = num;
}

void display(const array<int, 6> arr) {
    cout<<"Displaying array"<<endl;
    for(int i=0; i<arr.size(); i++) {
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
}

int solve() {

    cout<<endl<<endl<<"Experimental array 1"<<endl;
    array<int, 6> arr = {1, 2, 3, 4, 6, 5};
    display(arr);
    updateArrayCBV(arr, 2, 99);
    display(arr);
    updateArrayCBR(arr, 2, 99);
    display(arr);
    cout<<"Sorting an array"<<endl;
    sort(arr.begin(), arr.end());
    display(arr);

    cout<<endl<<endl<<"Experimental array 2"<<endl;
    array<int, 6> arrFill;
    arrFill.fill(5);
    display(arrFill);

    cout<<endl<<endl<<"For each loop"<<endl;
    cout<<"Displaying through forEach loop"<<endl;
    for(auto x: arr) {
        cout<<x<<" ";
    }
    cout<<endl;
    
    cout<<endl;
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