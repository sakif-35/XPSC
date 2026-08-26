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
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        vector<int> v(n+1);
        int sum = vec[0];
        for(int i=1; i<n ;i++){
            sum ^= vec[i];
        }
        for(int i=0; i<n; i++){
            v[i] = sum ^ vec[i];
        }
        v[n] = sum;
        sort(v.begin(),v.end());
        
        cout << v[0] << "\n";

    }

    return 0;
}