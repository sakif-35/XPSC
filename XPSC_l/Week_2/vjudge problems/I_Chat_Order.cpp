#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    map<string,bool> mp;
    stack<string> st;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        mp[s];
        st.push(s);
    }
    while(!st.empty()){
        s = st.top();
        if(!mp[s]){  
            cout << s << endl;
            mp[s] = true;
        }
        st.pop();
    }


    return 0;
}