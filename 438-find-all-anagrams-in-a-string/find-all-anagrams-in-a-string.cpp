class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();

        vector<int> ans;

        if(m > n){
            return ans;
        }

        unordered_map<char, int>freq1;
        unordered_map<char, int>freq2;

        

        for(int i =0; i<m; i++){
           freq1[p[i]]++;
           freq2[s[i]]++;
        }

        if(freq1 == freq2){
            ans.push_back(0);
        }

        for(int i =m; i<n; i++){
            freq2[s[i]]++;


            //remove the previous variable
            char ch = s[i-m];

            freq2[ch]--;

            if(freq2[ch] == 0){
                freq2.erase(ch);
            }

            if(freq1 == freq2){
                ans.push_back(i-m+1);
            }
        }

        return ans;
    }
};