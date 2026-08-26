#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n;
        vector<int> v;
        map<int,int> mp;
        vector<bool> vec;
        for(int i=0; i<n; i++){
            cin >> x;
            v.push_back(x); 
        }
        
        reverse(v.begin(),v.end());
        for(int x : v){
            if(mp[x]==0){ 
                vec.push_back(true);
                mp[x]++;
            }
            else vec.push_back(false);
        }
        
        reverse(vec.begin(), vec.end());
        int i=0, count=0;
        for(bool x : vec){
            i++;
            if(!x){
                count += i;
                i = 0;
            }
        }
        cout << count << endl;

    }

    return 0;
}