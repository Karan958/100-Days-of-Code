class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cs=0, m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) 
                cs=0;
            cs=max(cs+nums[i],nums[i]);
            m=max(m,cs);
            // if(max<cs) max=cs;
        }
        return m;
    }
};
