#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,l,r;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        b = a;
        sort(b.begin(),b.end());
        if(b==a){
            cout << -1 << endl;
        }
        else{
            l = 1;
            r = n;
            if(n%2==0){
                while(l>r){
                    int m =  
                }
            }
            else{
                l
            }
        }

    }

    return 0;
}