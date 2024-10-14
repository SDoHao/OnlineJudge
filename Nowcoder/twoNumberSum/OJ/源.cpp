#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N = 0;

struct Linux
{
    bool isVisited = false;
};

struct POS
{
    bool isVisited = false;
    int value = 0;
    int x;
    int y;
    struct Linux* lux;
};

bool visit(POS*& pos)
{
    if (pos->isVisited)
    {
        return false;
    }
    else if (pos->value == 1 && !pos->lux->isVisited)
    {
        pos->lux->isVisited = true;
        pos->isVisited = true;
        return true;
    }
    else if (pos->value == 0)
    {
        pos->isVisited = true;
        return false;
    }
    return false;
}

int BFS(vector<vector<POS*>>& map, int index)
{
    int num = 1;
    POS* p = map[index][index];
    queue<POS*> q;
    q.push(p);
    POS* temp;
    while (!q.empty())
    {
        p->isVisited = true;
        p->lux->isVisited = true;
        temp = q.front();
        q.pop();
        for (int i = 0; i < N; i++)
        {
            if (i != index)
            {
                temp = map[index][i];
                if (visit(temp))
                {
                    q.push(temp);
                    num++;
                }
            }

        }
    }
    //cout << num << endl;
    return num;
}

int maxPointsNum(vector<vector<POS*>>& map)
{
    int max = 0, n;
    for (int i = 0; i < N; i++)
    {
        n = BFS(map, i);
        if (n > max)
        {
            max = n;
        }
    }
    return max;
}

int main()
{
    vector<vector<POS*>> map;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        auto* lux = new Linux;
        vector<POS*> _map;
        for (int j = 0; j < N; j++)
        {
            POS* p = new POS;
            p->x = j;
            p->y = i;
            cin >> p->value;
            p->lux = lux;
            _map.push_back(p);
        }
        map.push_back(_map);
    }

    cout << maxPointsNum(map);
    return 0;
}



//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int findWord(char& c, map<string, int>& m)
//{
//    int l = 0;
//    int pos = -1;
//    for (auto& s : m)
//    {
//        if (s.second != -1 && c == s.first[0])
//        {
//            if (s.first.size() > l)
//            {
//                l = s.first.size();
//                pos = s.second;
//            }
//        }
//    }
//    return pos;
//}
//
//int main()
//{
//    int n;
//    int st, pos;
//    string str;
//    char c;
//    map<string, int> mapstr;
//    cin >> st >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> str;
//        mapstr[str] = i;
//    }
//    for (auto& s : mapstr)
//    {
//        if (s.second == st)
//        {
//            str = s.first;
//            s.second = -1;
//            c = str[str.size() - 1];
//            break;
//        }
//    }
//    pos = findWord(c, mapstr);
//    while (pos != -1)
//    {
//        for (auto& s : mapstr)
//            if (s.second == pos)
//            {
//                str += s.first;
//                s.second = -1;
//                c = s.first[s.first.size() - 1];
//            }
//        pos = findWord(c, mapstr);
//    }
//    cout << str;
//    return 0;
//}

//#include <iostream>
//#include <sstream>
//#include <string>
//#include <queue>
//#include <vector>
//using namespace std;
//
//vector<int> parserStringToVector(const string& s)
//{
//    vector<int> q;
//    string item;
//    stringstream ss(s);
//    while (getline(ss, item, ','))
//    {
//        q.push_back(stoi(item));
//    }
//    return q;
//}

//int main()
//{
//    int target;
//    int sum = 0;
//    int i = 0;
//    int l = 0, max_l = -1;
//    string s;
//    cin >> s;
//    cin >> target;
//    queue<int> q;
//    vector<int> arr;
//    arr = parserStringToVector(s);
//    while (i < arr.size())
//    {
//        if (sum < target)
//        {
//            sum += arr[i];
//            q.push(arr[i]);
//            i++;
//            l++;
//        }
//        else if (sum > target)
//        {
//            int a = q.front();
//            q.pop();
//            sum -= a;
//            l--;
//        }
//        else if (sum == target)
//        {
//            if (max_l < l)
//                max_l = l;
//            int a = q.front();
//            if (a != 0 || arr[i - 1] != 0)
//            {
//                q.pop();
//                sum -= a;
//                l--;
//            }
//        }
//    }
//    cout << max_l;
//    return 0;
//}
