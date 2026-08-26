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
        vector<char> vec;
        char c;
        for(int i=0; i<n; i++){
            cin >> c;
            vec.push_back(c);
        }
        long long sum = 0;
        for(int i=0; i<n; i++){
            if(vec[i]=='L')  sum += i;
            else  sum += (n-1-i);
        }
        
        queue<pair<int,char>> q;
        for(int i=0; i<n/2; i++){
            if(vec[i]=='L'){
                q.push({i,'L'});
            }
            if(vec[n-1-i]=='R'){
                q.push({n-1-i,'R'});
            }
        }
        int loop = n - q.size();
        while(!q.empty()){
            auto [x,y] = q.front();
            if(y=='L'){
                sum = sum - x + (n-1-x);
            }
            else{
                sum = sum - (n-1-x) + x;
            }
            q.pop();
            cout << sum << " ";
        }
        while(loop--)  
            cout << sum << " ";
        cout << endl;
        

    }

    return 0;
}