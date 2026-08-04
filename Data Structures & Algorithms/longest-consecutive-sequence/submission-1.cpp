class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }
        
        map<int, int> m;
        int res = 1;

        for(int i = 0;i < nums.size();i ++){

            m[nums[i]] = 1;
        }

        for(auto it = m.begin();it != m.end();it ++){

            if(m[it->first - 1] > 0){
                m[it->first] = m[it->first - 1] + 1;
                res = max(res, m[it->first]);
            }
        }

        return res;
    }
};
