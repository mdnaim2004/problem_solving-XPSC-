#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            int b;
            string s;

            cin >> b >> s;

            for( char c : s){
                if(c == 'U'){
                    arr[i] = (arr[i]-1 + 10) % 10;
                }
                else{
                    arr[i] = (arr[i] + 1) % 10;
                }
            }
        }
        for(int x: arr){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}