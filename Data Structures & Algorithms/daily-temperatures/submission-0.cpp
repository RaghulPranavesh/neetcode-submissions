class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;

        vector<int> result(temperatures.size(), 0);
        
        for(int i = 0;i < temperatures.size();i ++){

            if(i > 0){

                while(!st.empty()){

                    pair<int, int> top = st.top();
                    if(temperatures[i] > top.first){

                        result[top.second] = i - top.second;
                        st.pop();
                    } else{
                        break;
                    }
                }
            }

            st.push({temperatures[i], i});
        }

        return result;
    }
};
