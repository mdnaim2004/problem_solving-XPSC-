#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    set<int> s;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        s.insert(a);
    }
    int cnt = 0;
    for(int i=0; i<x; i++){
        if(s.count(i) == 0){
            cnt++;
        }
    }
    if(s.count(x)){
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}