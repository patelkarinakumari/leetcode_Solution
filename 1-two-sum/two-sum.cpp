#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if complement already exists in the map
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};  // Return the indices
            }

            // Store the current number with its index
            seen[nums[i]] = i;
        }

        return {};  // Will never be reached as per constraints
    }
};
