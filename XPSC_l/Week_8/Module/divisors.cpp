// O(n) - check all the values from 1 to n
// O(n/2) - check all the values from 1 to n/2
// O(sqrt(n)) - check all the values from 1 to sqrt(n). 
// sqrt(n) - O(1)
#include <bits/stdc++.h>
using namespace std;

void divisor(int val, vector<int> &divisors){
    int limit = sqrt(val);
    for(int i=1; i<=limit; i++){
        if(val%i==0){
            divisors.push_back(i);
            if(i!=(val/i)){
                divisors.push_back(val/i);
            }
        }
    }
}

int main() {

    int n;
    cin >> n;
    vector<int> divisors;
    divisor(n,divisors);
    sort(divisors.begin(),divisors.end());
    for(auto x : divisors) cout << x << " ";


    return 0;
}