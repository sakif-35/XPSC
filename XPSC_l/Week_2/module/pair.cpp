#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string,int> p = {"Rahim",3};
    // cout << p.first << " " <<  p.second << endl;
    
    // pair<string,double> p1; 
    // cin >> p1.first >> p1.second;
    // cout << p1.first << " " << p1.second << " " << endl;                                

    // auto[x,y] = p1;
    // cout << x << " " << y << endl;

    int n;
    cin >> n;
    vector<pair<string,int>> vec;
    pair<string,int> p;
    for(int i=0; i<n; i++){
        cin >> p.first >> p.second;
        vec.push_back(p);
    }

    for(pair<string,int> p1 : vec){
        cout << p1.first << " " << p1.second << endl;
    }
    for(auto p1 : vec){
        cout << p1.first << " " << p1.second << endl;
    }
    for(auto[x,y] : vec){
        cout << x << " " << y << endl;
    }

    return 0;
}

//pair also supports nested pair. But if we need more than 2 variable we can use tuple insteaed of nested pair.