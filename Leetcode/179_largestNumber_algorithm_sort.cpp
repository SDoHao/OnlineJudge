bool cmp(const int &s1,const int &s2)
    {
        return to_string(s1) + to_string(s2) > to_string(s2) + to_string(s1);
    }
class Solution {
    
public
    string largestNumber(vectorint& nums) 
    {
        string s;
        sort(nums.begin(),nums.end(),cmp);
        if(nums[0] == 0) return 0;
            for(int &inums)
                s += to_string(i);
                return s;
    }
};