#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> vec(m);
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=0; i<m; i++) cin >> vec[i];
    int l = 0, r = 0;
    long long count = 0;
    while(l<n && r<m){
        int target = v[l];
        int c1 = 0, c2 = 0;
        while(l<n && v[l]==target){
            c1++;
            l++;
        }
        while(r<m && vec[r]<target) r++;
        while(r<m && vec[r]==target){
            c2++;
            r++;
        }
        count += (long long)c1*c2;
    }
    cout << count;

    return 0;
}