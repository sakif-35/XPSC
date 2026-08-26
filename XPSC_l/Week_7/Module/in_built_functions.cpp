#include<bits/stdc++.h>
using namespace std;

void print_all_on_off_bits(int x){
    for(int i=31; i>=0; i--){
        (x & (1U<<i)) ? cout << 1 : cout << 0;
    }
    cout << endl;
}

int main(){

    int x;
    cin >> x;
    print_all_on_off_bits(x);
    cout << __builtin_popcount(x) << endl;
    // prints the total number of on bits
    // time complexity : O(1)
    // for long long :  __builtin_popcountll(x)
    cout << __lg(x) << endl;
    // prints the position of "highest set bit"
    // time complexity : O(1)
    // __lg(0) will crash since it has no set bit


    return 0;
}