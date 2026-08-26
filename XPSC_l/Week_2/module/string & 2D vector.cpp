// String contains a few STL which are similar of vector and also their time complexity are same. So its best to use vector unless the size isnot given in input. However there is one STL which is unique
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    cout << s << endl;
    cout << s.substr(1,3) << endl; //(starting index,size)
    cout << s.substr(2) << endl;  //(starting index)
    // isupper(s[i]), islower(s[i]);
    // stoi(), stoll(), stod(), stof(), to_string()
    // stls of vector also exist in string

    // you already know 2D vector

    return 0;
}