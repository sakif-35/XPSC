#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }
    int odd = 0;
    vector<char> vec;
    char c;
    for(auto [x,y] : mp){
        if(y%2!=0){
            odd++;
            c = x;
        } 
        if(odd>1){
            cout << "NO SOLUTION" << endl;
            return 0;
        }  
        for(int i=1; i<=y/2; i++){
            vec.push_back(x);
        }
    }
    for(int i=0; i<vec.size(); i++) cout << vec[i];
    if(odd==1)  cout << c;
    for(int i=vec.size()-1; i>=0; i--) cout << vec[i];

    return 0;
}