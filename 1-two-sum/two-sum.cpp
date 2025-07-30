class Solution {
    //again
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> targetIndices;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums.at(i)+nums.at(j)==target){
                    targetIndices.push_back(i);
                    targetIndices.push_back(j);
                    break;
                }
            }
        }
        return targetIndices;
    }
};