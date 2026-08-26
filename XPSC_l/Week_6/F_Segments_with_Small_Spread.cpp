#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long k;
    cin >> n >> k;
    vector<long long> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];

    int l=0,r=0;
    multiset<long long> ml;
    ml.insert(vec[l]);
    long long s = 0;
    while(r<n){
        if(*ml.rbegin()-*ml.begin() <= k){
            s += (r-l+1);
            r++;
            if(r<n) ml.insert(vec[r]);
        }
        else{
            ml.erase(ml.find(vec[l])); 
            l++;
        }
    }
    cout << s ;

    return 0;
}