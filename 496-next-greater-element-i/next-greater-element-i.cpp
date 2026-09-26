class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n=nums2.size();
        vector<int> alt(n);
        vector<int> result(nums1.size());
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                alt[i]=-1;
            }else{
                alt[i]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            auto it=ranges::find(nums2,nums1[i]);
            result[i]=alt[distance(nums2.begin(),it)];
        }
        return result;
    }
};