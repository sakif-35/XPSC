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
        for(int i=0; i<n; i++) 
            cin >> vec[i];
        int x = vec[0];
        for(int i=1; i<n; i++) 
            x &= vec[i];
        int cnt = 0;
        for(int i=30; i>=0; i--){
            if(x & (1<<i)){
                cnt += (1<<i);
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}