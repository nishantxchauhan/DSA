class Solution {
public:
    int longestSubstring(string s, int k) {
        int maxlen=0;
        for(int unique_element=1; unique_element<=26;unique_element++){
            int  low=0,high=0, unique_counter=0, required=0;
            vector<int> vec(26,0);
            while(high<s.size()){
              if(vec[s[high]-'a']==0){
                unique_counter++;
              }
              vec[s[high]-'a']++;
              if(vec[s[high]-'a']==k){
                required++;
              }
              while(unique_counter>unique_element){
                if(vec[s[low]-'a']==k){
                    required--;
                }
                vec[s[low]-'a']--;
                if(vec[s[low]-'a']==0){
                    unique_counter--;
                }
                low++;
              }
              high++;
              if(unique_element== unique_counter && unique_counter== required){
                maxlen= max(maxlen, high-low);
              }
              
            }
        }
        return maxlen;
    }
};