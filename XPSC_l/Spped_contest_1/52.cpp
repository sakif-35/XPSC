#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n,count = 0,x;
        cin >> n;
        while(n--){
            cin >> x;
            count += (x-1);
        }
        cout << count << endl;

    }

    return 0;
}