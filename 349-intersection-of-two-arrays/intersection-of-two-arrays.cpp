class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> res;
        vector <int> ans;
        set <int> st;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(int i=0; i<nums1.size();i++){
            for(int j=0; j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    res.push_back(nums1[i]);
                }
            }
        }

        for(int i=0 ;i<res.size();i++){
            st.insert(res[i]);
        }

        for( auto i: st){
            ans.push_back(i);
        }
        


        return ans;
    }
};