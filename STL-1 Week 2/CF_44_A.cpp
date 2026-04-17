#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    set<string> s;

    string a;
    for(int i=0;i<n; i++){
        getline(cin, a);
        s.insert(a);
    }
    cout<<s.size()<<"\n";
    return 0;
}