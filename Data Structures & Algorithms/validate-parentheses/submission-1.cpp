class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, int> map;

        map['{'] = 1;
        map['('] = 11;
        map['['] = 21;
        map['}'] = 2;
        map[')'] = 12;
        map[']'] = 22;

        stack<char> st;

        for(auto x : s){

            if(map[x] % 2 != 0){
                st.push(x);
            } else if(!st.empty()){

                char top = st.top();
                if(map[x] - map[top] == 1){
                    st.pop();
                } else{
                    return false;
                }
            } else{
                return false;
            }
        }

        return st.empty();
    }
};
