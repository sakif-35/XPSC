#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,m,temp;
        char ch;
        cin >> n >> m;
        vector<pair<char,bool>> s(n);
        pair<char,bool> p = {'\0',false};
        for(int i=0; i<n; i++){
            cin >> p.first;
            s[i] = p;
        }
        multiset<int> ind;
        multiset<char> c;
        for(int i=0; i<m; i++){
            cin >> temp;
            ind.insert(temp);
        }
        for(int i=0; i<m; i++){
            cin >> ch;
            c.insert(ch);
        }

        for(int i=0; i<m; i++){
            auto ind_it = ind.begin();
            auto c_it = c.begin();
            if(s[*ind_it-1].second==false){
                s[*ind_it-1].first = *c_it;
                s[*ind_it-1].second = true;
                ind.erase(ind_it);
                c.erase(c_it);
            }
            else{
                auto c_it1 = prev(c.end(),1);
                ind.erase(ind_it);
                c.erase(c_it1);
            }
        }

        for(auto [x,y] : s) cout << x;
        cout << endl;

    }

    return 0;
}