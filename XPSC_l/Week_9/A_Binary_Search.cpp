#include <bits/stdc++.h>
using namespace std;

bool bs(vector<int> &vec, int x){
    int l = 0, r = vec.size()-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if(vec[m]==x) return true;
        else if(vec[m]<x) l = m+1;
        else if(vec[m]>x) r = m-1;
    }
    return false;
}

int main() {

    int n,k;
    cin >> n >> k;
    vector<int> vec(n);
    for(int i=0; i<n; i++) 
        cin >> vec[i];
    
    int x;
    while(k--){
        cin >> x;
        cout << (bs(vec,x) ? "YES\n" : "NO\n");
    }


    return 0;
}