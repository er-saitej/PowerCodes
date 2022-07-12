/*
    author: Sai Tej Sunkara
    topic: Classical Arrays
    complexity: NA
    analysis: O(n!) > O(2^n) > O(n^2) > O(n*log.n) > O(n) > O(log.n) > O(1)
*/

#include<bits/stdc++.h>
#define int long long int // 9e18 - 9 million million million
#define endl "\n"
using namespace std;

void displayArray(int arr[], int size) {
    cout<<"Displaying Array"<<endl;
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void updateArray(int arr[], int i, int n) {
    arr[i] = n; // since arr is pointer object, it is passed by reference. So it gets base address of array and actual array is updated.
}

void arraySizeInFunction(int arr[]) {
    cout<<"Size of array inside a function (same as size of pointer object) "<<sizeof(arr)/sizeof(int)<<endl; // Because here arr is passed by reference and it only knows base address and doesn't know the actual size.
}

int solve() {
    int arr[5] = {1, 2, 3, 5, 4};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of an array is "<<size<<endl;
    displayArray(arr, size);
    updateArray(arr, 3, 19);
    displayArray(arr, size);
    arraySizeInFunction(arr);
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