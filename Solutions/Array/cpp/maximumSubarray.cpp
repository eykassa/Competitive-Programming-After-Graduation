class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0]; 
        int prev= nums[0]; 
        for(int i=1; i< nums.size(); i++){
            prev= std::max(nums[i], prev+nums[i]); 
            result= std::max(result, prev);
        }
        return result;
    }
};