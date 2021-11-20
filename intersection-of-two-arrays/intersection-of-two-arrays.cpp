class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        vector<int> res;
        sort(nums2.begin(),nums2.end());
        unordered_map<int,bool> m;
        int p1=0;
        int p2=0;
        while(p1 < nums1.size() && p2 < nums2.size()){
            if(nums1[p1] == nums2[p2] ){
                if(m.find(nums1[p1]) == m.end()){
                    res.push_back(nums2[p2]);
                    m.insert({nums1[p1],true});
                }
                    
                p1++;
                p2++;
            }
            else if(nums1[p1] > nums2[p2])
                p2++;
            else
                p1++;
            
        }
        return res;
    }
};