//here are some STL that is not in the pdf
// iterators : begin(), end() , rbegin(), rend(), -v.end()
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n;
    vector<int> vec;
    vec.reserve(n);
    for(int i=0; i<n; i++){
        cin >> x;
        vec.push_back(x);
    }

    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    
    sort(vec.begin(),vec.end());
    sort(vec.begin(),vec.end(),greater<int>());
    reverse(vec.begin(),vec.end());
    for(auto z : vec) cout << z << " ";
    cout << endl;

    auto it1 = find(vec.begin(),vec.end(),9);
    cout << *it1 << endl;
    auto it2 = find(vec.begin(), vec.end(), 7);
    (it2==vec.end()) ? cout << "Not Found" << endl : cout << "Found" << endl;
    
    replace(vec.begin(), vec.end(), 0, 7);
    for(auto x : vec) cout << x << " ";
    cout << endl;

    auto it = max_element(vec.begin(), vec.end());
    int max_position = it - vec.begin();
    cout << *it << " " << max_position << endl;

    //for  removing duplicates
    sort(vec.begin(), vec.end());
    sort(vec.begin(),vec.end(),greater<int>());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    return 0;
}

# 3 ways you can take a vector input:

1) 
int n,x;
cin >> n;
vector<int> vec;
for(int i=0; i<n; i++){
    cin >> x;
    vec.push_back(x);
}
here the time complexity is 2n.
because vector keeps every element in consecutive memory address. When we push the first value the capacity of the vector is 1 so it adds the 1st value. for the second value vector increases the capacity to 2 and create a new array with that capacity and copy all the elements from the old array(it creates new array with new capacity so that all the value can be kept in consecutive memory address). So for a size of 32 the capacity increases like as 1,2,4,8,16,32. So it creates new array every time it reaches the max capacity. So for pushing and adding 32 values the complexity is O(n) and it will copy the old array when the capacity increases until capacity is 32. So it will copy 5 times (when capacity is 1,2,4,8,16) So it will total copy 32 values in 5 different array which will take O(n) time complexity. So though the complexity is called O(n) it actually is more than O(2n) (since it takes input in x).

update : its actually O(3n)
i. O(n) for taking input of all n values in x which takes n operations
ii. O(n-1) for creating array 5 times and copying values(not pushing) takes (1+2+4+8+16=31)which takes another n-1 operations
iii. O(n) happens when you push value into the vector 64 times which takes n operation.
dont ever use this method. If you really want to use push back use the third method.

2) 
Best way for CP :
int n;
cin >> n;
vector<int> vec(n);
for(int i=0; i<n; i++){
    cin >> vec[i];
} 
time complexity O(2n) :
i.first O(n) for creating a n size vectors where every elemant is 0
ii.second O(n) happens when we take input directly in the vectors
here we dont need create multiple arrays and copy values. So it is much faster than the previous one & it also saves memory_order

3)
int n,x;
cin >> n;
vector<int> vec;
vec.reserve(n);
for(int i=0; i<n; i++){
    cin >> x;
    vec.push_back(x);
}
time complexity here is also O(2n). Here we dont have to create multiple arrays because when we call reserve the capacity of vector instantly becomes n. So the capacity doesnot increase gradually so there is no need to copy values. So the issues of the first way is not seen here.