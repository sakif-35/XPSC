#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,k,count=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i=s.size()-1; i>0; i--){
            if(s[i]=='1' && s[i-1]=='0'){
                count++;
                s[i-1]='1';
            }
            if(count==k) break;
        }
        int c = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') c++;
        }
        cout << c << endl;
    }

    return 0;
}