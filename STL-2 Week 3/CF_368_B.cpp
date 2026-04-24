#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >>m;
    vector<int> arr(n+5);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    while(m--){
        int l;
        cin >>l;
        
        set<int> s;

        for(int i = l-1; i<n; i++){
            s.insert(arr[i]);
        }
        cout << s.size() << "\n";
    }
    return 0;
}