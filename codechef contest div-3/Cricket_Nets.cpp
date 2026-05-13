#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;

        int ans;

        if(x <= 20){
            ans = x*10;
            cout << ans << "\n";
        }
        else if( x >= 20){
            int var1 = (x-20);
            int var2 = (x-var1) * 10;
            int var3 = (var1/2)*5;

            cout << var2 + var3 << "\n";
        }

        //cout << ans << "\n";
    }
    return 0;
}