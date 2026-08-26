#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,k;
        cin >> n >> k;
        if(k==0){
            if(n%4==0) cout << "Off" << endl;
            else cout << "On" << endl;
        }
        else{
            if(n%4==0) cout << "On" << endl;
            else cout << "Ambiguous" << endl;
        }


    }

    return 0;
}