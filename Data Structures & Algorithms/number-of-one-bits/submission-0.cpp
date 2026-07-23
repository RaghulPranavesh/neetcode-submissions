class Solution {
public:
    int hammingWeight(uint32_t n) {

        int res = 0;
        while(n != 0){

            int temp = n & 1;
            if(temp == 1){
                res++;
            }

            n = n>>1;
        }    

        return res;
    }
};
