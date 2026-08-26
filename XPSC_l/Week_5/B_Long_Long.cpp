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
        long long sum = 0;
        for(int i=0; i<n; i++){
            cin >> vec[i];
            sum += abs(vec[i]);
        }

        int cnt = 0;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(vec[i]<0 && flag){
                cnt++;
                flag  = false;
            }
            else if(vec[i]>0) flag = true;
        }

        cout << sum << " " << cnt << endl;
    }

    return 0;
}