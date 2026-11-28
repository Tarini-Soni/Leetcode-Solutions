class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if(n>m){
            return false;
        }

        unordered_map<char , int> freq1;
        unordered_map<char , int> freq2;

        for(int i =0; i<n; i++){
            freq1[s1[i]]++;
            freq2[s2[i]]++;
        }
        
        if(freq1 == freq2){
            return true;
        }

        //now will move the window

        for(int i =n; i<m; i++){
            freq2[s2[i]]++;

            //removing the element
            freq2[s2[i-n]]--;

            if(freq2[s2[i-n]] == 0){
                freq2.erase(s2[i-n]);
            }

            if(freq1 == freq2){
                return true;
            }
        }

        return false;
    }
};