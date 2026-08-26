#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        
        string s;
        cin >> s;
        bool flag = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]==s[i+1]){
                if(s[i]!='z')
                    s.insert(s.begin()+i+1,s[i]+1);
                else
                    s.insert(s.begin()+i+1,s[i]-1);
                flag = true;    
                break;
            }
        }
        if(s.size()==1 || !flag){
            if(s[0]!='z')
               s.insert(s.begin(),s[0]+1);
            else
                s.insert(s.begin(),s[0]-1);
        }
        cout << s << endl;

    }


    return 0;
}