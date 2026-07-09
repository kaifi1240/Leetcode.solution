class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {

            // Skip spaces
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0)
                break;

            int j = i;

            // Find beginning of the word
            while (j >= 0 && s[j] != ' ')
                j--;

            // Add space before next word
            if (!ans.empty())
                ans += ' ';

            // Copy the word
            ans += s.substr(j + 1, i - j);

            i = j - 1;
        }

        return ans;
    }
};