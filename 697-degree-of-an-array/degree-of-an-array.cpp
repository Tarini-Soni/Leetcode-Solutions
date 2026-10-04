class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> freq;
        unordered_map<int , int> first;
        unordered_map<int , int> last;

        int degree = 0;

        for(int i =0; i<nums.size(); i++){

            int num = nums[i];

            freq[num]++;

            if(first.find(num) == first.end()){
                first[num] = i;
            }

            last[num] = i;

            degree = max(degree , freq[num]);

        }

        int ans = nums.size();

        for(auto it : freq){
            int num = it.first;

            if(it.second == degree){
                int length = last[num] - first[num] + 1;

                ans = min(ans , length);
            }
        }

        return ans;


        
    }
};