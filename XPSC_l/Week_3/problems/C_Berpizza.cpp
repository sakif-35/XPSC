#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q,x,m,c=0;
    cin >> q;
    set<pair<int,int>> a;
    set<pair<int,int>,greater<pair<int,int>>> b;
    
    while(q--){
        cin >> x;
        if(x==1){
            cin >> m;
            c++;
            a.insert({c,m});
            b.insert({m,-c});
        }
        else if(x==2){
            auto [x,y] = *a.begin();
            cout <<  x << " ";
            a.erase({x,y});
            b.erase({y,-x}); 
        }
        else if(x==3){
            auto [x,y] = *b.begin();
            cout << -y << " ";
            a.erase({-y,x});
            b.erase({x,y});
        }

    }

    return 0;
}