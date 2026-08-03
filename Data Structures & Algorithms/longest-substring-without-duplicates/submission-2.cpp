class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> map;

        int l = 0;
        int r = 0;
        int res = 0;

        while(r < s.size()){

            map[s[r]]++;
            
            while(map[s[r]] > 1){

                map[s[l]]--;
                l ++;
            }

            res = max(res, r - l + 1);
            r++;
        }

        return res;
    }
};
