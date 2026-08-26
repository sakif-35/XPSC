#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,k, zero = 0, one = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i =0; i<n; i++){
            if(s[i]=='0') zero++;
            else  one++;
        }

        zero /= 2;
        one /= 2;
        int upper = zero + one;
        int lower = abs(zero-one);
        if((k<=upper && k>= lower) && (upper%2 == k%2)) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}