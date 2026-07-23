class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int l = 0;
        int r = 0;
        int res = 0;

        while(r < n){

            int currPrice = prices[r] - prices[l];
            res = max(res, currPrice);

            if(currPrice >= 0){
                r++; 
            } else if (currPrice < 0){
                l ++;
            }
        }

        return res;
    }
};
