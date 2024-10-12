#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	string s;
	cin >> s;
	set<char> unique_chars;
	for(char c:s)
	{
		if(0 <= c && c <= 127)
			unique_chars.insert(c);
	}	
	cout<<unique_chars.size()<<endl;
}

//OLD_VERSION
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	char c;
	int i, n;
	vector <char>::iterator it;
	while (cin >> str)
	{
		i = 0;
		std::vector<char> vchar;
		n = str.size();
		while (i < n && str[i] != '\n')
		{
			c = str[i];
			it = find(vchar.begin(), vchar.end(), c);
			if (it == vchar.end())
				vchar.push_back(c);
			i++;
		}
		cout << vchar.size() << endl;
	}
	return 0;
}