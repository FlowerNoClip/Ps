class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;

        
        for(int i = 0; i < groups.size(); i++)
        {
            if(i == 0) 
            {
                result.push_back(words[i]);
                continue;
            }

            if(groups[i] != groups[i-1])
            {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};