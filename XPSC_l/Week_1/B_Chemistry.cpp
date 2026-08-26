#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n,k;
        cin >> n >> k;
        vector<char> vec;
        char c;
        for(int i=0; i<n; i++){
            cin >> c;
            vec.push_back(c);
        }

        sort(vec.begin(),vec.end());
        int couple = 0, single = 0;
        for(int i=0; i<n; i++){
            if(i==n-1 || vec[i]!=vec[i+1]){
                single++;
            }
            else if(vec[i]==vec[i+1]){
                couple++;
                i++;
            }
        } 

        while(k>0 && single>0){
            single--;
            k--;
        }
        if(k!=0){
            while(k>0 && couple>0){
                if(k==1){
                    k--;
                    couple--;
                    single++;
                }
                else{
                    k-=2;
                    couple--;
                }
            
            }
        }

        (single==0 || single==1) ? cout << "YES" << endl : cout << "NO" << endl;

    }

    return 0;
}