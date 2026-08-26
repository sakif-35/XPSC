#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i=0; i<n; i++) cin >> vec[i];
        string s;
        cin >> s;
        vector<long long> pre(n);
        pre[0] = vec[0];
        for(int i=1; i<n; i++) pre[i] = pre[i-1] + vec[i];

        int l = 0, r = n-1;
        long long ans = 0; 
        while(true)
        {
            while(s[l]!='L' && l<n) l++;
            while(s[r]!='R' && r>=0) r--;
            if(l>r) break;
            ans += pre[r];
            if(l>0) ans -= pre[l-1];
            l++;
            r--;
        }
        
        cout << ans << endl;

    }

    return 0;
}