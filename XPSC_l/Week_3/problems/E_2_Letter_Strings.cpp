#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        string s;
        map<string,int> mp;
        map<char,int> first,second;
        long long count = 0;
        for(int i=0; i<n; i++){
            cin >> s;           
            mp[s]++;
            first[s[0]]++;
            second[s[1]]++;
        }
        for(auto [x,y] : first){
            if(y>1){
                count += (y*(y-1)/2);
            }
        }
        for(auto [x,y] : second){
            if(y>1){
                count += (y*(y-1)/2);
            }
        }
        for(auto [x,y] : mp){
            if(y>1){
                count -= (y*(y-1));
            }
        }
        cout << count << endl;
    }

    return 0;
}