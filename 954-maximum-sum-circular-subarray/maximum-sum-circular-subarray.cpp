class Solution {
public:
    int maxSubarraySumCircular(vector<int>& vec) {
        int minn =vec[0];
        int maxx =vec[0];
        int resultmin=vec[0];
        int resultmax=vec[0];
        int total=vec[0];
        for(int i=1;i<vec.size();i++){
            total +=vec[i];
            maxx=max(maxx+vec[i],vec[i]);
            minn=min(minn+vec[i],vec[i]);
            resultmin=min(resultmin,minn);
            resultmax=max(resultmax,maxx);
        }
        if (resultmax < 0) {
            return resultmax;
        }
        return max(resultmax,total-resultmin);

    }
};