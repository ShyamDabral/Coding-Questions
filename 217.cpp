/*LeetCode question no. 217 in C++
Date 21/12/2024 Time 12:38 A.M.
Time complexity O(nlogn) due to sort*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if (nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};
