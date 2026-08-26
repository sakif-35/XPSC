#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int a,b;
        cin >> a >> b;
        int time = a*b;
        cout << time/60 << " " << time%60 << endl;


    }

    return 0;
}