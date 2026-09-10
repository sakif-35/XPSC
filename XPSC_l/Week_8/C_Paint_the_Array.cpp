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
        vector<long long> vec(n);
        for(int i=0; i<n; i++) cin >> vec[i];
        vector<long long> even_pos, odd_pos;
        for(int i=0; i<n; i++){
            if(i%2==0) even_pos.push_back(vec[i]);
            else odd_pos.push_back(vec[i]);
        }
        
    }

    return 0;
}