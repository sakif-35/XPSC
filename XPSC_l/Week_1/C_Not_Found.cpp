#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<char> vec;
    char c;
    while(cin >> c){
        vec.push_back(c);
    }
    sort(vec.begin(),vec.end());
    bool flag = false;
    if(vec[0]!='a'){
        c = 'a';
        flag = true;
    }
    if(!flag){
        for(int i=0; i<vec.size()-1; i++){
            if((vec[i+1]-vec[i])>1){
                c = vec[i]+1;
                flag = true;
                break;
            }
        }
    }
    if(!flag && vec.back()!='z'){
        c = vec.back()+1;
        flag = true;
    }
    

    (flag) ? cout << c : cout << "None" ;

    return 0;
}