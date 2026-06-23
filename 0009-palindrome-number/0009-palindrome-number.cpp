class Solution {
public:
    bool isPalindrome(int x) {
       string a = to_string(x);
       reverse(a.begin(), a.end());
       string xx = to_string(x);

       if(xx == a) return true;

       return false;
    }
};