class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);

        int n = s.length();
        int ans = 0;

        for(int i =0; i<n; i++){
            ans += s[i] - '0';
        }

        if(ans > 9){
            return addDigits(ans);
        }

        return ans;
        
    }
};