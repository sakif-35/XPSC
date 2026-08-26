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
        vector<long long> even_pos, odd_pos;
        for(int i=0; i<n; i++){
            if(i%2==0) even_pos.push_back(vec[i]);
            else odd_pos.push_back(vec[i]);
        }
        sort(odd_pos.begin(),odd_pos.end());
        sort(even_pos.begin(),even_pos.end());
        int k,l;
        bool flag = false, f = true;
        if(odd_pos[0]==1 && even_pos[0]==1){
            f = false;
        }
        else if(even_pos[0]==1) k = 1, l = 0;
        else k = 0, l = 1;

        long long ans;
        if(f){
            vector<long long> divisors, divisors1;
            int limit = sqrt(vec[k]), limit1 = sqrt(vec[l]);
            long long val = vec[k], val1 = vec[l];
            for(int i=2; i<=limit; i++){
                if(val%i==0){
                    divisors.push_back(i);
                    if(i!=(val/i)){
                        divisors.push_back(val/i);
                    }
                }
            }
            for(int i=2; i<=limit1; i++){
                if(val1%i==0){
                    divisors1.push_back(i);
                    if(i!=(val1/i)){
                        divisors1.push_back(val1/i);
                    }
                }
            }
            divisors.push_back(val);
            divisors1.push_back(val1);
            sort(divisors.begin(),divisors.end());
            sort(divisors1.begin(),divisors1.end());
            for(int i=0; i<divisors.size(); i++){
                bool f1 = true, f2 = true;
                for(int j=k; j<n; j+=2){
                    if(vec[j]%divisors[i]!=0){
                        f1 = false;
                        break;
                    }
                }
                if(f1){
                    for(int j=l; j<n; j+=2){
                        if(vec[j]%divisors[i]==0){
                            f2 = false;
                            break;
                        }
                    }
                }
                if(f1 && f2){
                    flag = true;
                    ans = divisors[i];
                    break;
                }
            }
        if(!flag){
            for(int i=0; i<divisors1.size(); i++){
                bool f1 = true, f2 = true;
                for(int j=l; j<n; j+=2){
                    if(vec[j]%divisors1[i]!=0){
                        f1 = false;
                        break;
                    }
                }
                if(f1){
                    for(int j=k; j<n; j+=2){
                        if(vec[j]%divisors1[i]==0){
                            f2 = false;
                            break;
                        }
                    }
                }
                if(f1 && f2){
                    flag = true;
                    ans = divisors1[i];
                    break;
                }
            }
        }
        } 

        (flag) ? cout << ans << "\n" : cout << 0 << "\n";

    }

    return 0;
}