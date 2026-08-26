#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,s;
        cin >> n >> s;
        if(s>=n && s<=5*n) cout << 6*n << endl;
        else if(s>5*n){
            for(int i=1,j=n-1; i<=n; i++,j--){
                if(i*6+j*5==s){
                    cout << (i*5+j*6) << endl;
                    break;
                }
            }
        }


    }

    return 0;
}