#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sereja = 0;
    int dima = 0;

    int i=0;
    int j= n-1;
    int k = 0;

    while(i<= j){
        if(k % 2== 0){
            if(arr[i] > arr[j]){
                sereja += arr[i];
                i++;
            }
            else{
                sereja += arr[j];
                j--;
            }
        }
        else{
            if(arr[i] > arr[j]){
                dima += arr[i];
                i++;
            }
            else{
                dima += arr[j];
                j--;
            }
        }
        k++;
    }
    cout << sereja << " " << dima <<"\n";
     
    return 0;
}