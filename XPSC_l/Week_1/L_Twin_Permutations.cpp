#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n;
        vector<int> a;
        vector<int> b;
        vector<int> temp;
        for(int i=0; i<n; i++){
            cin >> x;
            a.push_back(x);
            temp.push_back(i+1);
        }
        for(int i=0; i<n; i++){
            int z = temp[n-a[i]];
            b.push_back(z);
        }
        for(int i=0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << endl;

    }

    return 0;
}