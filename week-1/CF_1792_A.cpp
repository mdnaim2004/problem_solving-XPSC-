#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        int sum = 0;
        int mx = 0;
        for(int i=0; i <n; i++){
            cin >> arr[i];
            sum += arr[i];
            mx = max(mx, arr[i]);
        }
        int val = (sum+1)/2;

        int ans = max(mx, val);

        cout << ans << "\n";
    }
    return 0;
}