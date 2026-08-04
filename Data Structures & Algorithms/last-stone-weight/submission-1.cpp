class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq;

        for(int i = 0;i < stones.size();i ++){

            pq.push(stones[i]);
        }

        while(1){

            if(pq.size() == 1){
                return pq.top();
            } else if(pq.size() == 0){
                return 0;
            }

            int top1 = pq.top();
            pq.pop();

            int top2 = pq.top();
            pq.pop();

            if(top1 - top2 > 0){
                pq.push(top1 - top2);
            }
        }

        return pq.top();
    }
};
