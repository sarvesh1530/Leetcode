class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        list<int> temp(nums.begin(),nums.end());
        int n=nums.size();
       temp.sort();
        temp.unique();
        int m=temp.size();
        if(m!=n){
            return true;
        }
        else{
            return false;
        }
        return true;
    }
};