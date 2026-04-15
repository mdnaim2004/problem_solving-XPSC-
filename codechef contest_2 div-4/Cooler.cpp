#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int m, n;
        cin >> m >> n;
        int total = (m*(m+1) /2) - (n*(n+1)/2);
        cout << total << endl;
    }
    return 0;
}