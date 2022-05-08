class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool> visited;
        int len = nums.size();
        for (int i = 0; i < len ; ++i) {
            if (visited[nums[i]] == true) {
                return true;
            }
            visited[nums[i]] = true;
        }
        return false;
    }
};
