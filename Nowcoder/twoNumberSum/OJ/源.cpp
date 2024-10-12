#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> _map;
        int n = numbers.size();
        int st, ed;
        for (int i = 0; i < n; i++)
        {
            
            if (_map[target - numbers[i]] )
            {
                 ed = i + 1;
                 st = _map[target - numbers[i]];
                break;
            }
            else
                _map[numbers[i]] = i + 1;
            
        }
        vector<int> a = { st,ed };
        return a;
    }
};
//一、将元素num作为键，数组下表作为值，插入到mapunordered_map中用于哈希查找，
//在插入元素之前先检测目标元素，即target - num是否在map中，如果在则退出循环，接返回两个下标
//如果不在则将元素插入。

int main()
{
    vector<int> numbers = { 0,3,3,0 };
    Solution solu;
    vector<int> a = solu.twoSum(numbers, 0);
}

