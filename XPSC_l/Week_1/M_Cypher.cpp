#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n;
        vector<int> vec;
        for(int i=0; i<n; i++){
            cin >> x;
            vec.push_back(x);
        }
        vector<pair<int,string>> p;
        pair<int,string> q;        
        for(int i=0; i<n; i++){
            cin >> q.first >> q.second;
            p.push_back(q);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<p[i].first; j++){
                if(p[i].second[j]=='U'){
                    if(vec[i]==0) vec[i] = 9;
                    else vec[i]--;
                }
                else if(p[i].second[j]=='D'){
                    if(vec[i]==9) vec[i] = 0;
                    else vec[i]++;
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << vec[i] << " ";
        }
        cout << endl;

    }

    return 0;
}