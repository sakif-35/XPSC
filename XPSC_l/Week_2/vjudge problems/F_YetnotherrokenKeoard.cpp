#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        
        string s;
        cin >> s;
        vector<pair<int,char>> vec;
        stack<pair<int,char>> lowercase, uppercase;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='b' && !lowercase.empty()) lowercase.pop();
            else if(s[i]=='B' && !uppercase.empty()) uppercase.pop();
            else if(isupper(s[i]) && s[i]!='B') uppercase.push({i,s[i]});
            else if(islower(s[i]) && s[i]!='b') lowercase.push({i,s[i]});
        }

        while(!lowercase.empty()){
            vec.push_back(lowercase.top());
            lowercase.pop();
        }
        while(!uppercase.empty()){
            vec.push_back(uppercase.top());
            uppercase.pop();
        }

        sort(vec.begin(), vec.end());
        for(auto[x,y] : vec)  cout << y; 
        cout << endl;

    }

    return 0;
}