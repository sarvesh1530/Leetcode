class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> sum=nums1;
        sum.insert(sum.end(),nums2.begin(),nums2.end());
        sort(sum.begin(),sum.end());
        int n=sum.size();
        if(n%2==0){
            return (sum[(n/2)-1]+sum[n/2]) / 2.0;
        }
        else{
            return sum[n/2];
        }

        

    }
};