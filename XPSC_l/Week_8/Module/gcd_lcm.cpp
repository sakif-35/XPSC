// Good news! Though there was no built in stl available for printing the divisors or to check the primality of a number but We got built in stl for gcd and lcm. Hurrrraaaaahhhhhh!

// gcd(a,b) 
// lcm(a,b) 
// __gcd(a,b)

// use C++ 17 to access those stl
// it uses Euclidean algorithm
// time complxity for both stl - O(log(min(a,b))) 

// lcm(a,b) = (a*b) / gcd(a,b)
// gcd(a,b)*lcm(a,b) = a*b

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << gcd(5,10) << endl;
    cout << lcm(9,10) << endl;


    return 0;
}
