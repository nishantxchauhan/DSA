class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int result=0;
        unordered_map<int,int> map;
        int zeros=0, ones=0;
        map[0] = -1;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==1){
            ones++;
          }else{
            zeros++;
          }
          int diff= zeros-ones;
          if(map.find(diff) != map.end()){
            result= max(result,i-(map[diff]));
          }else{
            map[diff]=i;
          }
        }
        return result;
    }
};