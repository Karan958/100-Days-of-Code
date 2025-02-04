class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int result=nums.size();
      int i=0;
      for(auto num:nums){
        result^=nums[i];
        result^=i;
        i++;
      }
      return result;
    }
};
