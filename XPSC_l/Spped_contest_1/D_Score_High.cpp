#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n;
        vector<int> mark;
        for(int i=0; i<4; i++){
            cin >> x;
            mark.push_back(x);
        }
        cout << *max_element(mark.begin(),mark.end()) << endl;

    }

    return 0;
}