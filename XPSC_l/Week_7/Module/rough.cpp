#include<bits/stdc++.h>
using namespace std;

void check_if_kth_bit_on_or_off(int x, int ind){
    (x&(1<<ind)) ? cout << 1 << endl : cout << 0 << endl;
}

void print_all_on_off_bits(int x){
    for(int i=31; i>=0; i--){
        (x & (1U<<i)) ? cout << 1 : cout << 0;
    }
    cout << endl;
}

void turn_on_kth_bit(int &x,int ind){
    x = x | (1<<ind);
}

void turn_off_kth_bit(int &x,int ind){
    x = x & ~(1<<ind);
}

void toggle_kth_bit(int &x, int ind){
    x = x ^ (1<<ind);
}

int main(){

    int x,ind;
    cin >> x >> ind;
    check_if_kth_bit_on_or_off(x,ind);
    print_all_on_off_bits(x);
    turn_on_kth_bit(x,1);
    print_all_on_off_bits(x);
    turn_off_kth_bit(x,4);
    print_all_on_off_bits(x);
    toggle_kth_bit(x,3);
    print_all_on_off_bits(x);



    return 0;
}