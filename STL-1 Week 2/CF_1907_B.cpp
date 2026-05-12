#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        vector<pair<char,int>> v;

        for(char c: s){
            if(c == 'b'){
                for(int i=v.size() -1; i>=0; i--){
                    if(islower(v[i].first)){
                        v.erase(v.begin() + i);
                        break;
                    }
                }
            }
            else if( c == 'B'){
                for(int i=v.size()-1; i>=0; i--){
                    if(isupper(v[i].first)){
                        v.erase(v.begin() + i);
                        break;
                    }
                }
            }
            else
                v.push_back({c, 1});      
        }
        for( auto x : v)
            cout << x.first;
        cout << "\n";
    }
    return 0;
}