#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >>m;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    while(m--){
        int q;
        cin >>q;
        
        set<int> s;

        for(int i = q; i<m; i++){
            s.insert(arr[i]);
        }
        cout << s.size() << "\n";
    }
    return 0;
}