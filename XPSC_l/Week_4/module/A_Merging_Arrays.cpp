#include <bits\stdc++.h>
using namespace std;

int main() {

    int n,m, l=0, r=0;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    while(l<n && r<m){
        if(a[l]<=b[r]){
            cout << a[l] << " ";
            l++;
        }
        else{
            cout << b[r] << " ";
            r++;
        }
    }
    if(l==n){
        while(r<m){
            cout << b[r] << " ";
            r++;
        }
    }
    if(r==m){
        while(l<n){
            cout << a[l] << " ";
            l++;
        }
    }

    return 0;
}