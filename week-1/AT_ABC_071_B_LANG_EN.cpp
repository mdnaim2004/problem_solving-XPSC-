#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    bool fnd = false;

    for(char c= 'a'; c <= 'z'; c++){
        bool fond = false;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                fond = true;
                break;
            }
        }

        if(fond == false){
            cout << c;
            return 0;
        }
    }
    cout << "None" << "\n";
    return 0;
}