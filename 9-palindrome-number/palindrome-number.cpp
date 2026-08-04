class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string str= to_string(x);
        int l=0,h=str.size()-1;
        while(l<h){
            if(str[l]==str[h]){
                l++;
                h--;
            }else{
                return false;
            }
        }
        return true;
    }
};