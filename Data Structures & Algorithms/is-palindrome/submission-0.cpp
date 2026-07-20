class Solution {
public:
    bool isPalindrome(string s) {

        stack<int> isPalindrome;

        for(auto x: s){

            if(isalnum(x)){

                if(isalpha(x)){

                    x = tolower(x);
                }

                isPalindrome.push(x);
            }
        }

        int i = 0;

        while(!isPalindrome.empty()){

            while(!isalnum(s[i]) && i < s.size()){
                i++;
            }

            char c = isPalindrome.top();
            isPalindrome.pop();

            if(i < s.size()){

                s[i] = tolower(s[i]);

                if(s[i] != c)
                    return false;

                i ++;
            }
        }

        return true;
    }
};
