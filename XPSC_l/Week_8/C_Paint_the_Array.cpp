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
        for(int i=0; i<n; i++) cin >> vec[i];
        long long x = vec[0];
        for(int i=2; i<n; i+=2){
            x = gcd(x,vec[i]);
        }
        vector<long long> divisors, divisors1;
        int limit = sqrt(x);
        for(int i=2; i<=limit; i++){
            if(x%i==0){
                divisors.push_back(i);
                if(i!=x/i){
                    divisors.push_back(x/i);
                }
            }
        }
        divisors.push_back(x);
        bool flag = false, f = false;
        long long ans = 0;
        for(int i=0; i<divisors.size(); i++){
            f = true;
            for(int j=1; j<n; j+=2){
                if(vec[j]%divisors[i]==0){
                    f = false;
                    break;
                }
            }
            if(f){
                flag = true;
                ans = divisors[i];
                break;
            }
        }
        if(!flag){
        x = vec[1];
        for(int i=3; i<n; i+=2){
            x = gcd(x,vec[i]);
        }
        limit = sqrt(x);
        for(int i=2; i<=limit; i++){
            if(x%i==0){
                divisors1.push_back(i);
                if(i!=x/i){
                    divisors1.push_back(x/i);
                }
            }
        }
        divisors1.push_back(x);
        for(int i=0; i<divisors1.size(); i++){
            f = true;
            for(int j=0; j<n; j+=2){
                if(vec[j]%divisors1[i]==0){
                    f = false;
                    break;
                }
            }
            if(f){
                flag = true;
                ans = divisors1[i];
                break;
            }
        }
        }
        cout << ans << "\n";
    }

    return 0;
}