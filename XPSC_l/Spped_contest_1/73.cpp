#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        bool s = true;
        if(n%2==0){
            cout << 1001;
            n -= 4;
            while(n--){
                if(s){
                    cout << 0;
                    s = false;
                }
                else{
                    cout << 1;
                    s = true;
                }
            }
        }
        else{
            while(n--){
                if(s){
                    cout << 0;
                    s = false;
                }
                else{
                    cout << 1;
                    s = true;
                }
            }
        }
        cout << endl;

    }

    return 0;
}