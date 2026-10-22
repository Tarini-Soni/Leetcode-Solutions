class Solution {
public:
    int minSwaps(string s) {
        int n = s.length();

        int balance = 0;
        int swaps = 0;

        for(int i =0; i<n; i++){
            if(s[i] == '['){
                balance++;
            }else{
                balance--;
            }

            if(balance<0){
                swaps++;
                balance = 0;
            }
        }

        return (swaps + 1 ) /2;

        
    }
};