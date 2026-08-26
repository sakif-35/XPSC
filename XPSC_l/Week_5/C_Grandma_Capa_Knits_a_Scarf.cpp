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
        vector<char> vec(n);
        map<char,int> mp;
        for(int i=0; i<n; i++){
            cin >> vec[i];
            mp[vec[i]]++;
        }
        vector<int> v;

        for(auto [x,y] : mp){
            char c = x;
            int l = 0, r = n-1, cnt = 0;
            while(l<r){
                if(vec[l]==vec[r]){
                    l++;
                    r--;
                }
                else{
                    if(vec[l]==x){
                        l++;
                        cnt++;
                    }
                    else if(vec[r]==x){
                        r--;
                        cnt++;
                    }
                    else{
                        break;
                    }
                }
            }
            if(l>=r) v.push_back(cnt);
        }

        (!v.empty()) ? cout << *min_element(v.begin(),v.end()) << endl : cout << -1 << endl; 

    }

    return 0;
}