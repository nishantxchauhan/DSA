class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> max_right(height.size());
        vector<int> max_left(height.size());
        max_left[0]=height[0];
        for(int i =1; i<height.size();i++){
            max_left[i]=max(max_left[i-1],height[i]);
        }
        max_right[height.size()-1]=height[height.size() - 1];
        for(int i=height.size()-2;i>=0;i--){
            max_right[i]=max(max_right[i+1],height[i]);
        }
        int total=0;
        for(int i=0;i<height.size();i++){
            total+=min(max_left[i],max_right[i])-height[i];
        }
        return total;
        
    }
};