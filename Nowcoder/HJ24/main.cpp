#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int num, value, _max = 0;
    cin >> num;
    vector<int> data, dp_up(num, 1), dp_down(num, 1);
    for (int i = 0; i < num; i++)
    {
        cin >> value;
        data.push_back(value);
    }
    for (int i = 1; i < num; i++)// 计算递增子序列
    {
        for (int j = 0; j < i; j++)
        {
            if (data[i] > data[j])
                dp_up[i] = max(dp_up[i], dp_up[j] + 1);
        }
    }
    for (int i = num - 2; i >= 0; i--)// 计算递减子序列
    {
        for (int j = num - 1; j > i; j--)
        {
            if (data[i] > data[j])
                dp_down[i] = max(dp_down[i], dp_down[j] + 1);
        }
    }
    for (int i = 0; i < num; i++)
    {
        if (dp_up[i] + dp_down[i] > _max)
        {
            _max = dp_up[i] + dp_down[i];
        }
    }
    cout << num - _max + 1;
    return 0;

    //京东 2020校招 笔试第一题：合唱队 AC:100
    /*int num, count = 0;
    cin >> num;
    vector<int> data, preMax(num, 1), aftMin(num, 1);
    for (int i = 0; i < num; i++)
    {
        int value;
        cin >> value;
        data.push_back(value);
    }
    preMax[0] = data[0];
    aftMin[num - 1] = INT_MAX;
    for (int i = 1; i < num; i++)
        preMax[i] = max(preMax[i - 1], data[i]);
    for (int i = num - 2; i >= 0; i--)
        aftMin[i] = min(aftMin[i + 1], data[i + 1]);
    for (int i = 0; i < num; i++)
        if(preMax[i] > aftMin[i])
            count++;
    cout << count << endl;
    return 0;*/
}