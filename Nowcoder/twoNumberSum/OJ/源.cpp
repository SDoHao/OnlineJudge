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
//һ����Ԫ��num��Ϊ���������±���Ϊֵ�����뵽mapunordered_map�����ڹ�ϣ���ң�
//�ڲ���Ԫ��֮ǰ�ȼ��Ŀ��Ԫ�أ���target - num�Ƿ���map�У���������˳�ѭ�����ӷ��������±�
//���������Ԫ�ز��롣

int main()
{
    vector<int> numbers = { 0,3,3,0 };
    Solution solu;
    vector<int> a = solu.twoSum(numbers, 0);
}

