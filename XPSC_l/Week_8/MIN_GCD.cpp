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
        vector<long long> vec(n),divisors;
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        long long mn = vec[0];
        long long a = 0, b = 0;
        for(int i=1; i<n; i++){
            if(vec[i]%mn==0){
                divisors.push_back(vec[i]);
            }
        }
        if(divisors.size()==0){
            cout << "No\n";
        }
        else{
            long long gd = divisors[0];
            for(auto x : divisors){
                gd = gcd(gd,x);
            }
            cout << ((mn==gd)? "Yes\n" : "No\n");
        }

    }

    return 0;
}