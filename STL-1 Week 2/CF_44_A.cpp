#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    for(int i=0; i<n; i++){
        getline(cin, s);
        //cout << s << endl;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}