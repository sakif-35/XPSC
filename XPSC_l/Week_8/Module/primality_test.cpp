// primality test - check if a number is a prime or not
// 1 has only one divisor, so 1 is not prime
// The standard def of a prime number only applies to positive integers greater than 1.
// All negative numbers are non prime
// time complexity - O(sqrt(n))
#include <bits/stdc++.h>
using namespace std;

bool prime(int x){
    if(x<=1) return false;
    int limit = sqrt(x);
    for(int i=2; i<=limit; i++){
        if(x%i==0) return false;
    }
    return true;
}

int main() {

    cout << prime(10) << endl;
    cout << prime(19) << endl;
    cout << prime(121) << endl;
    cout << prime(139) << endl;
    cout << prime(89) << endl;


    return 0;
}