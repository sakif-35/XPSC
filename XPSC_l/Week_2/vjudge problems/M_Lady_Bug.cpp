#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n;
        char x;
        cin >> n;
        int a = 0, b = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            if(i%2==0 && x=='1') a++;
            if(i%2!=0 && x=='1') b++;
        }
        for(int i=0; i<n; i++){
            cin >> x;
            if(i%2==0 && x=='0') b--;
            if(i%2!=0 && x=='0') a--;
        }
        (a<=0 && b<=0) ? cout << "YES" << endl : cout << "NO" << endl;

    }

    return 0;
}