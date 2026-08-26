#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n;
    deque<int> dq;
    for(int i=0; i<n; i++){
        cin >> x;
        dq.push_back(x);
    }

    int s = 0, d = 0, flag = 0;
    while(!dq.empty()){
        if(flag==0){
            if(dq.front()>=dq.back()){
                s += dq.front();
                dq.pop_front();
            }
            else{
                s += dq.back();
                dq.pop_back();
            }
            flag = 1;
        }
        else{
            if(dq.front()>=dq.back()){
                d += dq.front();
                dq.pop_front();
            }
            else{
                d += dq.back();
                dq.pop_back();
            }
            flag = 0;
        }
    }
    
    cout << s << " " << d;

    return 0;
}