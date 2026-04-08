#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n < 5)
        cout << (n*100) <<"\n";
    else
        cout << ((n*100) - (n*0.15 *100)) << "\n"; 
    
    return 0;
}