#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        set<int>s;
        int i;
        for(i=n-1; i>= 0; i--){
            if(s.count(arr[i])){
                break;
            }
            s.insert(arr[i]);
        }
        cout << i+1 << "\n";
    }

    return 0;
}