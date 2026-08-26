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
        bool flag = true;
        vector<int> vec(n), v(n);
        cin >> vec[0];
        for(int i=1; i<n; i++){
            cin >> vec[i];
            if(vec[i]!=vec[i-1]) flag = false;
        }

        if(!flag){
            for(int i=0; i<n; i++){
                v = vec;
                for(int j=0; j<n; j++){
                    if(j<i){
                        v[j] += v[i];
                    }
                    else{
                        v[j] -= v[i];
                    }
                }
                bool f = true;
                for(int i=1; i<n; i++){
                    if(v[i]!=v[i-1]) f = false;
                }
                if(f){
                    flag = true;
                    break;
                }
            }

        }
        (flag) ? cout << "Yes\n" : cout << "No\n";

    }

    return 0;
}