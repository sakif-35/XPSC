#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x,z;
    cin >> n >> x;
    vector<int> vec;
    for(int i=0; i<n; i++){
        cin >> z;
        vec.push_back(z);
    }
    vec.push_back(INT_MAX);
    sort(vec.begin(), vec.end());
    int count = 0;
    for(int i=0; i<vec.size(); i++){
        if(i==x && vec[i]!=i){
            break;
        }
        else if(i==x && vec[i]==i){
            count++;
            break;
        }
        else if(i!=x && vec[i]!=i){
            vec.insert(vec.begin()+i,i);
            count++;
        }
    }

    cout << count << endl;


    return 0;
}