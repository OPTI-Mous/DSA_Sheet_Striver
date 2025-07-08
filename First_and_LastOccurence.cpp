class Solution {
public:
int firstocc(vector<int> &nums,int x){
    int n=nums.size();
    int first=-1;
    int low=0,high=n-1;
      while(low<=high){
      int mid=(low+high)/2;
        if(nums[mid]==x){
            first=mid;
            high=mid-1;       
        }
        else if(nums[mid]>x){high=mid-1;
        }
        else low=mid+1;
      }
      return first;
}
int lastocc(vector<int> &nums,int x){
    int n=nums.size();
    int last=-1;
    int low=0,high=n-1;
     while(low<=high){
    int mid=(low+high)/2;
        if(nums[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]>x){
            high=mid-1;
        }
        else low=mid+1;
     }
     return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
       int first=firstocc(nums,target);
       if(first==-1) return {-1,-1};
       int last=lastocc(nums,target);
       return {first,last};
    }
};