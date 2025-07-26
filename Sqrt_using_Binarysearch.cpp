class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int ans=1;
        int low=1,high=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid*mid==n) return mid;
            if(mid*mid<n){
                ans=mid;
                low=mid+1;
            }
            else if(mid*mid>n)high=mid-1;
    }
    return ans;
    }
};