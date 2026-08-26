#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,n;
    cin >> x >> n;
    set<int> s;
    map<int,int> mp;
    s.insert(0);
    s.insert(x);
    
    while(n--){
        cin >> x;
        s.insert(x);
        auto it = s.lower_bound(x);
        it = prev(it,1);
        auto it1 = s.upper_bound(x);
        int a = x - *it;
        int b = *it1 - x;
        int c = *it1 - *it;
        mp[a]++;
        mp[b]++;
        if(mp.count(c)!=0){
            mp[c]--;
            if(mp[c]==0) mp.erase(c);
        }
        auto it2 = prev(mp.end(),1);
        cout << it2->first << " ";
    }

    return 0;
}