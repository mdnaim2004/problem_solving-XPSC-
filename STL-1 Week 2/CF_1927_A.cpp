#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int st = 0;
        int end = 0;

        for(int i=0; i<n; i++){
            if(s[i] == 'B' && s[i] == 0)
                st++;
            if(s[i] == 'B' && s[i] != 0)
                end++;
        }
        cout << abs(st-end)+1 << "\n";
        
    }
    return 0;
}