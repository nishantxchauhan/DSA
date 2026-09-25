class Solution {
public:
    vector<vector<int>> result;
    // void sort(vector<vector<int>>& vec){
    //     int n = vec.size();
    //     for(int j=0;j<n-1;j++){
    //         int ind = j;
    //       for(int i=j+1;i<vec.size();i++){
    //         if(vec[i][0]<vec[ind][0]){
    //             ind=i;
    //         }
    //       }
    //       vector<int> temp=vec[ind];
    //       vec[ind]=vec[j];
    //       vec[j]=temp;
    //     }
    // }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int start =intervals[0][0];
        int end = intervals[0][1];
        for(int i=1; i<intervals.size();i++){
            if(intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
                continue;
            }
            result.push_back({start, end});
            start=intervals[i][0];
            end=intervals[i][1];
        }
        result.push_back({start, end});
        return result;
    }
};