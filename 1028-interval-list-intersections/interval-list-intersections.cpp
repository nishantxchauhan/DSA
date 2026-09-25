class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) {
        vector<vector<int>> res;
        int i=0;
        int j=0;
        int start1, start2, end1, end2;
        while(i<first.size() && j<second.size()){
           start1=first[i][0];
           end1=first[i][1];
           start2= second[j][0];
           end2=second[j][1];
           if(start1<start2){
             if(end1>=start2){
                int s=max(start1,start2);
                int e=min(end1,end2);
                res.push_back({s,e});
             }
           }else{
            if(end2>=start1){
                int s=max(start1,start2);
                int e=min(end1,end2);
                res.push_back({s,e});
            }
           }
            if(end1<=end2){
                i++;
            }else{
                j++;
            }
        }
        return res;
    }
};