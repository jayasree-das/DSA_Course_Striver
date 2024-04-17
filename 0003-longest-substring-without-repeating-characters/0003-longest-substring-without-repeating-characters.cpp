class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;

        int r = 0, l = 0, n = s.size(), maxlen = 0;

        while (r < n) {
             mp[s[r]]++;
            while(mp[s[r]] > 1) {
                mp[s[l]]--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};