class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> vec;
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        bool inserted = false;
        for (int i = 0; i < intervals.size(); i++) {
          if (!inserted && newInterval[0] < intervals[i][0]) {
            vec.push_back(newInterval);
            inserted = true;
           }
           vec.push_back(intervals[i]);
        }
        if (!inserted) {
         vec.push_back(newInterval);
        }
        int start=vec[0][0];
        int end=vec[0][1];
        for(int i=1; i<vec.size();i++){
            if(end>=vec[i][0]){
                end=max(end,vec[i][1]);
                continue;
            }
            result.push_back({start,end});
            start=vec[i][0];
            end=vec[i][1];
        }
        result.push_back({start,end});
        return result;
    }
};