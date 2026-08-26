#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, prev, cur;
    long long m = 0;
    cin >> n >> prev;
    n--;
    while(n--){
        cin >> cur;
        if(cur<prev){
            m += prev - cur;
            cur = prev;
        }
        prev = cur;
    }
    cout << m;

    return 0;
}