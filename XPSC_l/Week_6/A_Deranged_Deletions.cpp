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
        vector<int> vec(n), temp(n), ans;
        for(int i=0; i<n; i++) cin >> vec[i];
        temp = vec;
        sort(temp.begin(),temp.end());
        if(temp!=vec){
            cout << "YES" << endl;
            for(int i=0; i<n; i++){
                if(vec[i]!=temp[i])
                    ans.push_back(vec[i]);
            }
            cout << ans.size() << endl;
            for(auto x : ans) cout << x << " ";
            cout << endl;
        }
        else{
            cout << "No" << endl;
        }

    }

    return 0;
}