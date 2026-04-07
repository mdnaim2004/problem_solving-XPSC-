#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,t;
    cin>>a >> b >> t;

    int time = t/a;

    int total  = time*b;

    cout << total << "\n"; 
    return 0;
}