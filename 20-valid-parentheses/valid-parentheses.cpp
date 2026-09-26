class Solution {
public:
    bool isValid(string s) {
        vector<char> open= {'(','[','{'};
        vector<char> close={')',']','}'};
        stack<char> st;
        for(char i:s){
            if(ranges::contains(close,i)){
                auto it=ranges::find(close,i);
                if(st.empty()){
                    return false;
                }else if(st.top()==open[distance(close.begin(),it)]){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                st.push(i);
            }
        }
        return st.empty();
    }
};