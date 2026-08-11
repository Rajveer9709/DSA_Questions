class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string merged;
        int i = 0;
        int j = 0;
        int len1 = word1.size();
        int len2 = word2.size();

        while (i < len1 && j < len2) {
            merged.push_back(word1[i]);
            merged.push_back(word2[j]);
            i++;
            j++;
        }

        // append leftover characters from whichever string is longer
        while (i < len1) {
            merged.push_back(word1[i]);
            i++;
        }
        while (j < len2) {
            merged.push_back(word2[j]);
            j++;
        }

        return merged;
    }
};