#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long x;
    cin >> n >> x;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    int l = 0, r = 0, cnt = 0, mn = INT_MAX, temp = 0;
    long long sum = vec[l];
    bool flag = false;

    while(l<n){
        if(sum>=x){
            flag = true;
            temp = r-l+1;
            mn = min(mn,temp);
            sum -= vec[l];
            l++; 
        }
        else{
            if(r<n-1){
                r++;
                sum += vec[r];
            }
            else break;
        }
    }

    (flag) ? cout << mn : cout << -1;

    return 0;
}