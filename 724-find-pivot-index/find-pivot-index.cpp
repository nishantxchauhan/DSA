class Solution {
public:
    int pivotIndex(vector<int>& vec) {
        int prefix=0;
        int suffix=0;
        int total =accumulate(vec.begin(),vec.end(),0);
        for(int i=0;i<vec.size();i++){
            if(i!=0){
                prefix +=vec[i-1];
            }
            suffix =total-vec[i]-prefix;
            if(prefix==suffix){
                return i;
            }
        }
        return -1;
    }
};