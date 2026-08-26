//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int l=0, r=0, sum=arr[l], mx=0;
        while(r-l+1!=k){
            r++;
            sum += arr[r];
        }    
        mx = sum;
        while(r<arr.size()-1){
            sum -= arr[l];
            l++;
            r++;
            sum += arr[r];
            mx = max(sum,mx);
        }
        return mx;
    }
};