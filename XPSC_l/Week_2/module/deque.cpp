// Deque means double ended vector. It works just like as vector(all the STL are same). Here value can be added in the front and the back in O(1) time complexity which is less than vector. But it consumes twice the memory of a vector since it uses two pounter. Also it may sound same like as queue but it isn't. Here you dont need to pop a value to print it. Just use it like as vector
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

    for(int i=0; i<n; i++){
        cout << dq[i] << " ";
    }
    cout << endl;

    dq.push_front(10);
    dq.push_front(20);

    for(auto a : dq) cout << a << " ";
    cout << endl;

    
    return 0;
}