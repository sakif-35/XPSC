//Map is like a container which works as {key,value} pair. Here every single key is unique &every value is accessed through keys. Map can use insert, erase, find, operator[] in O(logN) time complexity 
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp.insert({4,5});
    mp.insert({9,76});
    mp[10] = 31;
    mp[6] = 25;
    mp[10] = 78;
    cout << mp[10] << endl;
    mp.erase(4);
    cout << mp.size() << endl << endl;

    auto it = mp.find(9);
    if(it==mp.end()){
        cout << "Key not found" << endl;
    }
    else{
        cout << it->first << " " << it->second << endl;
    }
    it = mp.find(100);
    (it==mp.end()) ? cout << "Key Not Found" << endl : cout << it->second << endl;
    cout << endl;

    // for(auto x : mp){
    //     cout << x.first << " " << x.second << " ";
    //     cout << endl;
    // }
    for(auto [key,value] : mp){
        cout << key <<  " " << value << " ";
        cout << endl;
    }
    cout << endl;
    
    it = mp.lower_bound(7);
    cout << it->first << " " << it->second << endl;
    it = mp.upper_bound(7);
    cout << it->first << " " << it->second << endl;
    it = mp.lower_bound(9);
    cout << it->first << " " << it->second << endl;
    it = mp.upper_bound(9);
    cout << it->first << " " << it->second << endl;
    
    return 0;
}
// Its best to use mp.count() rather than using [] cause it saves both time and memory
//map uses tree data structure and unordered_map uses hash table. So average time conmplexity for insert,erase,find,[] is O(1) and sometimes in worst case scenario it is O(n)
//the range based for loop works by using iterator. So if you erase a key then the iterator also gets removed and the loop gets broken.So if you need to modify a map inside a for each loop its best to use manual iterator loop instead of for each loop and simply you can use this  line : it = mp.erase(it). Here after removing an iterator returns the next iterator in it. So the loop doesnot get broken.
// ++it is faster than it++ cause in ++it original iterator just moves forward and returns the updated iterator without creating a copy. But in it++ at first copy is created for the old(current) iterator and the original iterator moves forward and returns the old iterator. For traversing its best to use ++it. And we can use it++ in a special case which is mp.erase(it++).