// Set is a data structure like vector. Set keeps only UNIQUE datas and stores them in SORTED(ascending) way. WE can take input only by insert stl since values arer kept in sorted way. There is no push_back or push_front. WE also print the values via iterator (not index like as vector) and we also can print using for each loop. Time complexity 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin >> n;
    //set<int> s;
    set<int, greater<int>> s;
    for(int i=0; i<n; i++){
        cin >> x;
        s.insert(x);
    }

    for(auto it = s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    s.insert(9);
    for(int x : s) cout << x << " ";
    cout << endl;

    if(s.count(9)==1) s.erase(9);
    for(auto x : s) cout << x << " ";
    cout << endl;

    auto it = s.find(2);
    (it==s.end()) ? cout << "No\n" : cout << "Yes\n" << *it << endl;

    cout << s.count(1) << endl << s.count(7) << endl << s.count(10) << endl;
    (s.count(8)==0) ? cout << "No\n" : cout << "Yes\n";

    it = s.lower_bound(6);
    (it==s.end()) ? cout << "No\n" : cout << "YES " << *it << endl;
    it = s.lower_bound(3);
    (it==s.end()) ? cout << "No\n" : cout << "YES " << *it << endl;
    it = s.upper_bound(7);
    (it==s.end()) ? cout << "No\n" : cout << "YES " << *it << endl;
    it = s.upper_bound(8);
    (it==s.end()) ? cout << "No\n" : cout << "YES " << *it << endl; 
    

    return 0;
}