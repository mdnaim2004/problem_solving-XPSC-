#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int c1 = k+ (60*n);
    int c2 = k*n;

    if(c1 < c2)
        cout << c1 << endl;
    else
        cout << c2 << endl;
    return 0;
}