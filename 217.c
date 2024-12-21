/*LeetCode question no. 217
Date 21/12/2024 Time 11:47 A.M.*/
bool containsDuplicate(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if (nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
