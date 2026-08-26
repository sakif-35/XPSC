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
        multiset<int> ml;
        for(int i=1; i<=n; i++) ml.insert(i);
        cout << 2 << endl;
        
        while(n>1){
             auto it = prev(ml.end(),1);
             auto it1 = prev(ml.end(),2);
             int x = ceil(((double)*it+(double)*it1)/2);
             ml.insert(x);
             cout << *it1 << " " << *it << endl;
             ml.erase(it);
             ml.erase(it1);
             n--;
        }
    }

    return 0;
}