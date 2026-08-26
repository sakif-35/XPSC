#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n >> x;
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        long long bank = 0;
        for(int i : vec){
            if(i>x) bank += (i-x);
        }
        int count = 0;
        sort(vec.begin(),vec.end(),greater<int>());
        for(int i : vec){
            if(i>=x) count++;
            else if(i<x && bank>=(x-i)){
                bank -= (x-i);
                count++;
            }
        } 
        cout << count << endl;
    }

    return 0;
}