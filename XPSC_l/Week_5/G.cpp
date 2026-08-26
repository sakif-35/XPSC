class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int p = pat.size(), t = txt.size();
        vector<int> vec(26);
        for(int i=0; i<p; i++) vec[pat[i]-'a']++;
        vector<int> vec1(26);
        int l = 0, r = 0, cnt = 0;
        vec1[txt[r]-'a']++;
        while(r<p-1){
            r++;
            vec1[txt[r]-'a']++;
        }
        while(r<t){
            if(vec==vec1) cnt++;
            vec1[txt[l]-'a']--;
            l++;
            r++;
            if(r<txt.size()) vec1[txt[r]-'a']++;            
        }
        return cnt;
    }  
};