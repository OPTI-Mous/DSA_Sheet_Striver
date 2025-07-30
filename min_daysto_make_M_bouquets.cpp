#include<bits/stdc++.h>
class Solution {
public:
bool possible(vector<int> & bloomday,int day,int m,int k){
    int cnt=0;
    int noofB=0;
    for (int i=0;i<bloomday.size();i++){
        if(bloomday[i]<=day)cnt++;
        else{
            noofB+=(cnt/k);
            cnt=0;
        }
    }
 noofB+=(cnt/k);
        return noofB>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=INT_MAX,high=INT_MIN;
        int n=bloomDay.size();
        long long value=m*1LL*k*1LL;
        if(value>n) return -1;
        for(int i=0;i<n;i++){
            low=min(low,bloomDay[i]);
            high=max(high,bloomDay[i]);
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k))high=mid-1;
            else{low=mid+1;}
        }
    return low;   
    }
};