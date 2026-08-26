#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    int k;
    cin >> n >> k;
    vector<long long> divisors;
    int limit = sqrt(n);
    for(int i=1; i<=limit; i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());

    cout << (k<=divisors.size() ? divisors[k-1] : -1) << "\n";

   return 0; 
}