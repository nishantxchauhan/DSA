class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int, int> map;
        int result = 0;
        map[0]++;
        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;
            
            if(rem < 0) {
                rem += k;
            }
            
            if(map.find(rem) != map.end()) {
                result += map[rem];
            }
            map[rem]++;
        }
        return result;
    }
};