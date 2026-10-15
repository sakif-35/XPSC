#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        long long n,a,b,p,q;
        cin >> n >> a >> b >> p >> q;
        long long c = lcm(a,b);
        long long ans = 0;
        ans += (n/c)*max(p,q);
        ans += (n/a - n/c)*p;
        ans += (n/b - n/c)*q;
        cout << ans ;


    return 0;
}