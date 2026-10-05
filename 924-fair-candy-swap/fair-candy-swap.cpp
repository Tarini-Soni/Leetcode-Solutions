class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int n = aliceSizes.size();
        int m = bobSizes.size();

        int aliceSum = 0;
        int bobSum = 0;

        for(int can : aliceSizes){
            aliceSum += can;
        }

        for(int can : bobSizes){
            bobSum += can;
        }

        for(int i =0; i<n; i++){

            for(int j =0; j<m; j++){

                int a = aliceSizes[i];
                int b = bobSizes[j];

                if(aliceSum - a + b == bobSum + a - b){
                return {a, b};
            }
        }
        }
        return {};
        
    }
};