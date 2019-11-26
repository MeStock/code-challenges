#include <set>
#include <vector>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) return 0;
        set<int> uniqueNums;
        set<int> found;
        for(auto num : nums){
            if(uniqueNums.count(num - k)){
                found.insert(num - k);
            }
            if(uniqueNums.count(num + k)){
                found.insert(num);
            }
            uniqueNums.insert(num);
        }
        return found.size();
    }
};