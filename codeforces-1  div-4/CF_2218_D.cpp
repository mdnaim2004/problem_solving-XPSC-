#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long int> arr;
        long long int a = 1, b = 3;

        while(arr.size() < n){
            arr.push_back(a*b);
            a += 2;
            b += 2;

        }
        for(auto x : arr){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}