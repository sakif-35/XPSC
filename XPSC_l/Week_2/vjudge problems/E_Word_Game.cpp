#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<string> one, two, three;
        string s;
        map<string,int> freq;
        for(int i=0; i<n; i++){
            cin >> s;
            freq[s]++;
            one.push_back(s);
        }
        for(int i=0; i<n; i++){
            cin >> s;
            freq[s]++;
            two.push_back(s);
        }
        for(int i=0; i<n; i++){
            cin >> s;
            freq[s]++;
            three.push_back(s);
        }

        int point_one = 0, point_two = 0, point_three = 0;
        for(string s : one){
            if(freq[s]==2)  point_one += 1;
            else if(freq[s]==1) point_one += 3; 
        }
        for(string s : two){
            if(freq[s]==2)  point_two += 1;
            else if(freq[s]==1) point_two += 3; 
        }
        for(string s : three){
            if(freq[s]==2)  point_three += 1;
            else if(freq[s]==1) point_three += 3; 
        }

        cout << point_one << " " << point_two << " " << point_three << endl;

    }

    return 0;
}