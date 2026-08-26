// check if kth bit on or off
// print all on and off bits
// turn on kth bit
// turn off kth bit
// toggle kth bit
#include<bits/stdc++.h>
using namespace std;

void check_if_kth_bit_on_or_off(int x, int ind){
    (x&(1<<ind)) ? cout << 1 << endl : cout << 0 << endl;
    // non zero means true, zero means false
}

void print_all_on_and_off_bits(int x){
    for(int i=31; i>=0; i--){
        (x & (1U<<i)) ? cout << 1 : cout << 0;
    }
    cout << endl;
}

void turn_on_kth_bit(int &n, int ind){
    n = (n | (1<<ind));
}

void turn_off_kth_bit(int &n, int ind){
    n = (n & ~(1<<ind));
    // n &= ~(1<<ind);
}

void toggle_kth_bit(int &n, int ind){
    n = n ^ (1<<ind);
}

int main(){

    int n, ind;
    cin >> n >> ind;
    check_if_kth_bit_on_or_off(n,ind);
    print_all_on_and_off_bits(n);
    turn_on_kth_bit(n,1);
    cout << n << endl;
    turn_off_kth_bit(n,1);
    cout << n << endl;
    toggle_kth_bit(n,1);
    cout << n << endl;

    return 0;
}