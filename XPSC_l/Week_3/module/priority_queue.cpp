//Priority queue is just like as queue. All the STLs are same. The only difference here is that all the value here are kept in non increasing(descending) or non decreasing(ascending) order. The time complexity for push, pop stl is O(logN) since the values are kept in sorted way and we use top() instead of front() and back().

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    int n,x;
    cin >> n;
    while(n--){
        cin >> x;
        pq.push(x);
    }
    
    cout  << pq.size() << endl;

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }


    return 0;
}