class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) 
    // {
    //     int i,j,n = nums.size();
    //     for(i = 0;i < n;i++)
    //     {
    //         for(j = i + 1;j < n;j++)
    //         {
    //             if(nums[i] + nums[j] == target)
    //                 return {i,j};
    //         }
    //     }
    //     return {};
    // }
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        unordered_map<int,int> udmap;
        vector<int> result;
        for(int i = 0;i < n;i++)
        {
            if(udmap.find(target - nums[i])!=udmap.end())
            {
               result.push_back(i);
               result.push_back(udmap[target - nums[i]]);
               break;
            }
            udmap.insert({nums[i],i});
        }
    
        return result;
    }
};