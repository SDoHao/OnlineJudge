#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int i = 0;
        int n = nums.size();
        while (i < n && target > nums[i]) { i++; }
        if (i < n && target < nums[i])
        {
            nums.push_back(nums[n - 1]);
            for (int j = n - 2; j > i; j--)
                nums[j] = nums[j - 1];
            nums[i] = target;
        }
        return i;
    }
};

int main()
{
    Solution solution;
    vector<int> a = { 1,3,5,6 };
    cout << solution.searchInsert(a, 5);
    return 0;
}