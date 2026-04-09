#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, x;
    cin >> s >> x;

    vector<int> arr(s);

    for(int i=0; i<s; i++){
        cin >> arr[i];
    }
    int ans = 0;
    
    for(int i=0; i<x; i++){
        if(arr[i] == 0)
            ans++;
    }

    return 0;
}