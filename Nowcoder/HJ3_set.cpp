//set容器是一种具备自动排序功能的集合，默认递增排序;元素无法直接修改，且不能重复;另一个版本叫做multiset，允许存在重复元，其他功能和性质一样，

#include <iostream>
#include <set>
using namespace std;

int main() 
{
	int n,num;
	cin >> n;
	set<int> unique_nums;
	for(int i = 0;i < n;i++)
	{
		cin >> num;
		unique_nums.insert(num);
	}
	for (int num:unique_nums)
		cout << num << endl;
	return 0;
}


//OLD_VERSION
#include <iostream>
#include <vector>
using namespace std;

int cmp(const void *p1,const void *p2)
{
	return *((int*)p1) - *(int*)p2;
}

int main() 
{
	bool flag;
	int n,i = 0,_temp;	
	vector<int> arr;
	vector<int>::iterator index;
	cin >> n;
	while (i < n)
	{
		cin >> _temp;
		flag = true;
		for (index = arr.begin(); index < arr.end(); index++)
		{
			if (*index == _temp)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arr.push_back(_temp);
		}	
		i++;
	}
	qsort(&arr[0], arr.size(), sizeof(int), cmp);
	for (i = 0; i < arr.size(); i++)
		cout << arr[i] << endl;
	return 0;
}