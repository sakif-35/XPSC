#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y,sum=0;
    cin >> x >> y;
    for(int i=0; i<2; i++){
        if(x>y){
            sum += x;
            x--;
        }
        else{
            sum += y;
            y--;
        }
    }
    cout << sum;

    return 0;
}