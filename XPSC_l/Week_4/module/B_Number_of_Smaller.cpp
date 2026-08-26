#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m,x;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> vec(m);
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=0; i<m; i++) cin >> vec[i];
    int l = 0, r = 0;
    while(r<m){
        if(l<n && v[l]<vec[r]){
            l++;
        }
        else{
            cout << l << " ";
            r++;
        }
    }

    return 0;
}