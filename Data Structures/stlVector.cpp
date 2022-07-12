/*
    author: Sai Tej Sunkara
    topic: Vector - Dynamic Arrays
    complexity: O(1)
    analysis: O(n!) > O(2^n) > O(n^2) > O(n*log.n) > O(n) > O(log.n) > O(1)
*/

#include<bits/stdc++.h>
#include<array>
#include<vector>
#define int long long int // 9e18 - 9 million million million
#define endl "\n"
using namespace std;

void display(const vector<int> vec) {
    cout<<"Displaying vector: Size - "<<vec.size()<<" and Capacity - "<<vec.capacity()<<endl;
    for(auto x: vec) {
        cout<<x<<" ";
    }
    cout<<endl;
}

int solve() {
    vector<int> vec1;
    vector<int> vec2(5,99); // creates vector of size 5 and capacity 5 and fills with 99
    array<int, 6> arr = {1, 2, 5, 6, 4, 3};
    vector<int> vec3(arr.begin(), arr.end()); // Copies array
    vec3.reserve(10);

    cout<<"Vector 2"<<endl;
    display(vec2);

    cout<<"Vector 3"<<endl;
    display(vec3);
    vec3.push_back(100);
    display(vec3);
    vec3.push_back(101);
    display(vec3);
    vec3.push_back(102);
    display(vec3);
    vec3.push_back(104);
    display(vec3);

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