class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int low=0,high=n-1;
        int small=INT_MAX;
        int idx=-1;
        while(low<=high){
            int mid=(low+high)/2;
           //left
           if(arr[low]<=arr[high]){if(arr[low]<small){
              idx=low;
              small=arr[low];}
               low=mid+1;
               break;
           }
           if(arr[low]<=arr[mid]){if(arr[low]<small){
               idx=low;
               small=arr[low];
           }
               
               low=mid+1;
           }
           else{if(arr[mid]<small){
               idx=mid;
               small=arr[mid];}
               high=high-1;
           }
        }
        return idx;
    }

};
