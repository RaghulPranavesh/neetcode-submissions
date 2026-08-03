class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        int minCost = INT_MAX;

        vector<int> arr(n + 1, INT_MAX);

        arr[0] = 0;
        arr[1] = 0;

        for(int i = 2;i <= n;i ++){

            arr[i] = min(arr[i - 1] + cost[i - 1], arr[i - 2] + cost[i - 2]);
        }

        return arr[n];

    }
};
