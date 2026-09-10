class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());
        int prod_left=1;
        for(int i=0;i<nums.size();i++){
          answer[i]=prod_left;
          prod_left*=nums[i];
        }
        int prod_right=1;
        for(int i=nums.size()-1;i>=0;i--){
          answer[i]*=prod_right;
          prod_right*=nums[i];
        }
        return answer;
    }
};