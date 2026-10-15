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
        vector<long long> vec(n);
        for(int i=0; i<n; i++) 
            cin >> vec[i];
        
        bool flag = true;
        long long d = vec[0];
        for(int i=0; i<n; i+=2){
            d = gcd(d,vec[i]);
        }
        for(int i=1; i<n; i+=2){
            if(vec[i]%d==0){
                flag = false;
                break;
            }
        }

        if(!flag){
            flag = true;
            d = vec[1];
            for(int i=1; i<n; i+=2){
                d = gcd(d,vec[i]);
            }
            for(int i=0; i<n; i+=2){
                if(vec[i]%d==0){
                    flag = false;
                    break;
                }
            }    
        }

        cout << (flag ? d : 0 ) << endl;
        
    }

    return 0;
}