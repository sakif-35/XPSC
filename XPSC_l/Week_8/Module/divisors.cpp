// O(n) - check all the values from 1 to n
// O(n/2) - check all the values from 1 to n/2
// O(sqrt(n)) - check all the values from 1 to sqrt(n). 
// sqrt(n) - O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> divisors;
    int limit = sqrt(n);
    for(int i=1; i<=limit; i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=(n/i)){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    
    for(auto x : divisors) cout << x << " ";


    return 0;
}