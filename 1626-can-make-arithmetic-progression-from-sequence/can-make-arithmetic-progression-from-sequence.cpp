class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();

        sort(arr.begin() , arr.end());

        int const_diff = arr[1] - arr[0];

        for(int i =1 ; i<n-1 ; i++){
           
                int diff = arr[i+1] - arr[i];

                if(diff != const_diff){
                   return false;
                }
        }

        return true;
        
        
    }
};