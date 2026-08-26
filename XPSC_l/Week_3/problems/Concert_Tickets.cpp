#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m,x;
    cin >> n >> m;
    multiset<int> ml;
    for(int i=0; i<n; i++){
        cin >> x;
        ml.insert(x);
    }
    while(m--){
        cin >> x;
        auto it = ml.upper_bound(x);
        if(it==ml.begin()) cout << -1 << endl;
        else{
            it = prev(it,1);
            if(*it<=x){
                cout << *it << endl;
                ml.erase(it);
            }
            else cout << -1 << endl;    
        }
    }


    return 0;
}