#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n = 7;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = -1e9; // most lowest value....

        for(int i=0; i<n; i++){
            int  sum = 0;
            for(int j=0; j<n; j++){
                if(i == j) sum += arr[j];
                else sum -= arr[j];
            }
            ans = max(ans, sum);

        }
        cout << ans << "\n";
    }
    return 0;
}