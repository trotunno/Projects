class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indeces;
        bool check = false;
        for (int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++)
                if(nums[i] + nums[j] == target && i != j) {
                    indeces.push_back(i);
                    indeces.push_back(j);
                    check = true;
                    break;
                }
            if (check == true) { break; }
        }
        return indeces;    
        }
};