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

    int n;
    cin >> n;
    if(prime(n)){
        cout << 1;
    }
    else if(n%2==0){
        cout << 2;
    }
    else{
        if(prime(n-2)){
            cout << 2;
        }
        else{
            cout << 3;
        }
    }

    return 0;
}