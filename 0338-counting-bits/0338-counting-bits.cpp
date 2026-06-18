#include <vector>
#include <bit> // 1. std::popcount를 쓰기 위해 필수

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp;
        for(int i = 0; i <= n; i++)
        {
            dp.push_back(popcount((unsigned int)i)); 
        }
        return dp;
    }
};