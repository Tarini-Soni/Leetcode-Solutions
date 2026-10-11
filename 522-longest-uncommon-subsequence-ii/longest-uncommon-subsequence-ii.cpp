class Solution {
public:
    int findLUSlength(vector<string>& strs) {
        sort(strs.begin(), strs.end(), [](string a, string b) {
            return a.length() > b.length();
        });

        for (int i = 0; i < strs.size(); i++) {
            bool uncommon = true;

            for (int j = 0; j < strs.size(); j++) {
                if (i != j && isSubsequence(strs[i], strs[j])) {
                    uncommon = false;
                    break;
                }
            }

            if (uncommon) {
                return strs[i].length();
            }
        }

        return -1;
    }

    bool isSubsequence(string a, string b) {
        int i = 0, j = 0;

        while (i < a.length() && j < b.length()) {
            if (a[i] == b[j]) {
                i++;
            }
            j++;
        }

        return i == a.length();
    }
};