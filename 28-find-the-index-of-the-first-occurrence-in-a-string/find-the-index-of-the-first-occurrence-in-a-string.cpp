
class Solution {
public:

    // Checks if needle matches from position j in haystack
    bool match(string& haystack, string& needle, int i, int j) {

        // All characters of needle matched
        if (j == needle.size()) {
            return true;
        }

        // Reached the end of haystack
        if (i == haystack.size()) {
            return false;
        }

        // Characters do not match
        if (haystack[i] != needle[j]) {
            return false;
        }

        // Check the next characters
        return match(haystack, needle, i + 1, j + 1);
    }

    // Checks each possible starting position
    int findIndex(string& haystack, string& needle, int i) {

        // No valid starting position remains
        if (i + needle.size() > haystack.size()) {
            return -1;
        }

        // Check if needle starts at position i
        if (match(haystack, needle, i, 0)) {
            return i;
        }

        // Try the next starting position
        return findIndex(haystack, needle, i + 1);
    }

    int strStr(string haystack, string needle) {

        // An empty needle is found at index 0
        if (needle.empty()) {
            return 0;
        }

        return findIndex(haystack, needle, 0);
    }
};
