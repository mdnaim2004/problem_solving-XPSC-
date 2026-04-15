#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr;
        int r = n * 3;

        for(int i=0; i<n; i++){
            arr.push_back(i+1);
            arr.push_back(r - 1);
            arr.push_back(r);
            r-=2;
        }

        for(auto x : arr){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}