class Solution {
public:
    int partitionString(string s) {
        int high=0;
        int count=1;
        vector<int> vec(26,0);
        while(high<s.size()){
            vec[s[high]-'a']++;
            if(vec[s[high]-'a']>1){
                count++;
                fill(vec.begin(),vec.end(),0);
                continue;
            }
            high++;
        }
        return count;
    }
};