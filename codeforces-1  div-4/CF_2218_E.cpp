#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;

        for(auto x : arr){
            for(auto y : arr){
                ans = max(ans, x^y);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}