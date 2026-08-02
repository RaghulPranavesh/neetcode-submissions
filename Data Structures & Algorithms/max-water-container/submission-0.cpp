class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int l = 0;
        int r = heights.size() - 1;
        int res = 0;

        while(l < r){

            int height = min(heights[l], heights[r]);
            int breadth = r - l;
            int waterArea = height * breadth;

            res = max(res, waterArea);

            if(heights[l] <= heights[r]){
                l ++;
            } else if(heights[l] > heights[r]) {
                r--;
            }       
        }

        return res;
    }
};
