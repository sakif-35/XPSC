#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple<string,int,char> t = {"rahim",56,'j'};
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    // auto[x,y,z] = t;
    // cout << x << " " << y << " " << z << endl;

    // tuple<string,int,char> t;
    // cin >> get<0>(t) >> get<1>(t) >> get<2>(t);
    // auto[x,y,z] = t;
    // cout << x << " " << y << " " << z << endl; 

    int n;
    cin >> n;
    vector<tuple<string,int,char>> vec;
    tuple<string,int,char> t;
    for(int i=0; i<n; i++){
        cin >> get<0>(t) >> get<1>(t) >> get<2>(t);
        vec.push_back(t);
    }
    for(auto[x,y,z] : vec){
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}