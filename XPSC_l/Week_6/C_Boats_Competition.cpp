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
        vector<int> vec(n), m_list(101), list(101);
        for(int i=0; i<n; i++){
            cin >> vec[i];
            m_list[vec[i]]++;
        }
        int grp = 0;
        sort(vec.begin(),vec.end());
        
        for(int s=2; s<=100; s++){
            list = m_list;
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(vec[i]>=s) break;
                if(list[vec[i]]>0 && list[s-vec[i]]>0){
                    if(vec[i]==(s-vec[i]) && list[vec[i]]<2) continue;
                    cnt++;
                    list[vec[i]]--;
                    list[s-vec[i]]--;
                }
            }
            grp = max(grp,cnt);
        }
        cout << grp << endl;

    }

    return 0;
}