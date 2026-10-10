class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        int n1= nums1.size();
        int n2 = nums2.size();

        set<int> s1(nums1.begin() , nums1.end());
        set<int> s2(nums2.begin() , nums2.end());;

        vector<int> ans1;
        vector<int> ans2;

        for(int num : s1){
            if(s2.find(num) == s2.end()){
                 ans1.push_back(num);
            }
        }

        for(int num : s2){
            if(s1.find(num) == s1.end()){
                ans2.push_back(num);
            }
        }

        return {ans1 , ans2};
        
    }
};