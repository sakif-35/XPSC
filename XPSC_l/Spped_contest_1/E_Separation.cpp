#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,x,a;
        cin >> n >> x;
        vector<int> vec;
        int flag = 0;
        for(int i=0; i<n; i++){
            cin >> a;
            vec.push_back(a);
            if(a==x) flag = 1;
        }

        (flag==1 || x<*min_element(vec.begin(),vec.end()) || x>*max_element(vec.begin(),vec.end())) ? cout << "Yes" << endl : cout << "No" << endl;


    }

    return 0;
}