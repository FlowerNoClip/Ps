class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int result = 0;
        string temp = word;
        while(sequence.find(temp) != string::npos)
        {
            result++;
            temp += word;
        }


        return result;
    }
};