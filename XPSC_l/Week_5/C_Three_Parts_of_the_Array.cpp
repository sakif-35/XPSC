#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
        cin >> n;
        vector<int> vec(n);
        for(int i=0; i<n; i++) cin >> vec[i];
        int l = 0, r = n-1;
        long long sum1 = vec[l], sum2 = vec[r],ans = 0;
        while(l<r){
            if(sum1==sum2){
                ans = sum1;
                l++;
                r--;
                sum1 += vec[l];
                sum2 += vec[r];
            }
            else if(sum1<sum2){
                l++;
                sum1 += vec[l];
            }
            else if(sum1>sum2){
                r--;
                sum2 += vec[r];
            }
        }
        cout << ans << endl;

    return 0;
}