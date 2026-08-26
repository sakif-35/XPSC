//The only difference between set and multiset is that the values are not unique in multiset. That means the deuplicate values that were filtered out in set are no longer filtered out in multiset. All STLs are here same as set.

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //multiset<int> ml;
    multiset<int, greater<int>> ml;
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        ml.insert(x);
    }
    for(int m : ml) cout << m << " ";
    cout << endl;

    ml.erase(ml.find(7)); // removes only one 7
    for(int m : ml) cout << m << " ";
    cout << endl;

    ml.erase(7); // removes all the 7
    for(int m : ml) cout << m << " ";
    cout << endl;

    ml.insert(7);
    ml.insert(7);
    cout << ml.count(7) << endl;
    cout << ml.count(100) << endl;
    
    auto it = ml.lower_bound(4);
    if(it!=ml.end()) cout << *it << endl;
    it = ml.upper_bound(4);
    if(it!=ml.end()) cout << *it << endl;

    return 0;
}