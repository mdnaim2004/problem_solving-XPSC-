#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int x;
    long long int sum = 0;
    for(int i=0; i<n-1; i++){
        cin >> x;
        sum += x;
    }
    long long int total = n*(n+1)/2;
    long long int find = total - sum;
    cout << find << "\n";
    return 0;
}
