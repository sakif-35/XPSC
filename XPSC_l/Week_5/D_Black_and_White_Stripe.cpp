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
        string s;
        cin >> s;
        int l = 0, r = 0, black = 0, mn = k;
        bool flag = false;
        while(r<n){
            if(r<k){
                if(s[r]=='B'){
                    black++;
                }
                r++;
            }
            else{
                if(s[l]=='B') black--;
                l++;
                if(s[r]=='B') black++;
                r++;
            }
            if(black==k){
                flag = true;
                break;
            }
            else if(r>=k){
                mn = min(mn,k-black);
            }
        }
        (flag) ? cout << 0 << endl : cout << mn << endl;

    }

    return 0;
}