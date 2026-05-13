#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int aus = x+z;
    int ans = (x+z+1) - y;
    // cout << ans << "\n";

    if(y > aus)
        cout << 0 << "\n";
    else
        cout << ans << "\n";
    return 0;
}