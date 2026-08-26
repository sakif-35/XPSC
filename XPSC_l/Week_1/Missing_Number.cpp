#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x;
    cin >> n;
    vector<int> vec(n+1);
    while(n--){
        cin >> x;
        vec[x] = 1;
    } 
    for(int i=1; i<vec.size(); i++){
        if(vec[i]==0){
            cout << i;
            break;
        }
    }


    return 0;
}