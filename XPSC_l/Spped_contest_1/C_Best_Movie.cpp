#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,x;
        cin >> n;
        vector<int> list;
        bool flag = false;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x>=7){
                cin >> x;
                list.push_back(x);
                flag = true;
            }else{
                cin >> x;
            }
        }

        (flag) ? cout << *min_element(list.begin(),list.end()) << endl : cout << -1 << endl;

    }

    return 0;
}