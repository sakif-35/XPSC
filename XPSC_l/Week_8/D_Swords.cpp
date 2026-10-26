#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin >> n;
        vector<int> vec(n);
        int z = 0;
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }

        long long y = 0;
        int x = *max_element(vec.begin(),vec.end());
        for(int i=0; i<n; i++){
            z = gcd(z,x-vec[i]);
        }
        for(int i=0; i<n; i++){
            y += ((x-vec[i])/z);
        }    
        cout << y << " " << z << endl;


    

    return 0;
}