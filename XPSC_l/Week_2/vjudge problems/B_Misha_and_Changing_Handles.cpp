#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<pair<string,string>> old;
    pair<string,string> p;
    for(int i=0; i<n; i++){
        cin >> p.first >> p.second ;
        old.push_back(p);
    }

    vector<pair<string,string>> updated;
    vector<bool> flag(n,false);
    for(int i=0; i<n; i++){
        if(flag[i]) continue;
        p.first = old[i].first;
        p.second = old[i].second;
        flag[i] = true;
        for(int j = i+1; j<n ; j++){
            if(flag[j]) continue;
            if(p.second == old[j].first){
                p.second = old[j].second;
                flag[j] = true;
            }
        }
        updated.push_back(p);
    }

    cout << updated.size() << endl;
    for(auto [x,y] : updated){
        cout << x << " " << y << endl;
    }

    return 0;
}