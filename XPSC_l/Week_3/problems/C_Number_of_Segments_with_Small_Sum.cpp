#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,s,x,count=0;
    cin >> n >> s;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    int l = 0, r = 1, val = 0;
    while(l<n-1){
        val = vec[l];
        while(r<n){
            val += vec[r];
            if(val<=s) count++;
            else break;
            r++;
        }
        l++;
        r = l + 1;
    }
    count += n;
    cout << count << endl;

    return 0;
}