#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }    
    map<int, int>mp;
    for(int i=0; i<n; i++){
        int val = arr[i];
        mp[val]++;
    }
    int mx = 0;
    for(auto [val, count] : mp){
        mx = max(count, mx);
    }
    cout << mx << "\n";

    return 0;
}