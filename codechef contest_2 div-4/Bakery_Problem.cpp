#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int c1 = k+ (60*n);
    int c2 = k*n;
     cout << min(c1, c2) << "\n";
    return 0;
}