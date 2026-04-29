#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;

         
        for(int i=0; i<n; i++){
            int cur = 0;
            for(int j=i; j<n; j++){
                if(cur %2 == 0){
                    if(s[j] == 'u' || s[j] == 'o')
                        cur++;
                    else
                        break;
                }
                else{
                    if(s[j]== 'w')
                        cur++;
                    else
                        break;
                }
                if(cur % 2 == 1)
                    ans = max(ans, cur);
            }
            
        }
        //cout << n << "\n" << s << "\n";
        cout << ans <<"\n";
    }
    return 0;
}