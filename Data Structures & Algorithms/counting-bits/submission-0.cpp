class Solution {
public:
    vector<int> countBits(int n) {

        if(n == 0){
            return {0};
        } else if(n == 1){
            return {0,1};
        }
        
        vector<int> res(n+1, 0);

        res[0] = 0;
        res[1] = 1;
        res[2] = 1;

        for(int i = 3;i <= n;i ++){

            if(i & 1){
                res[i]++;
            }

            int num = i >> 1;
            res[i] += res[num];
        }

        return res;
    }
};
