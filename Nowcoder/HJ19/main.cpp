#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
using record = struct record;
struct record {
    string fileName;
    int count = 0;
    int index = 0;
    record* next = nullptr;
};

int main() {
    string line;
    unordered_map<string, record* > countRecoed;
    stack<record*> qRecord;
    while (getline(cin, line)) {
        int pos = line.find(' ');
        string filePath = line.substr(0, pos);
        int index = atoi(line.substr(pos + 1).c_str());
        int fileNamePos = filePath.find_last_of('\\');
        if (filePath.size() - fileNamePos > 16)
            fileNamePos = filePath.size() - 17;

        string fileName = filePath.substr(fileNamePos + 1);
        if (countRecoed[fileName])
        {
            record* pRec = countRecoed[fileName];
            while (pRec->index != index)
            {
                if (pRec->index == index)
                {
                    //pRec->count++;
                    break;
                }
                else if (pRec->next == nullptr)
                {
                    pRec->next = new record;
                    pRec = pRec->next;
                    pRec->fileName = fileName;
                    pRec->index = index;
                    qRecord.push(pRec);
                    break;
                }
                pRec = pRec->next;
            }
            pRec->count++;
        }
        else {
            auto* pRec = new record;
            pRec->fileName = fileName;
            pRec->index = index;
            pRec->count++;
            countRecoed[fileName] = pRec;
            qRecord.push(pRec);
        }
    }
    for (int i = 0; i < 8 && !qRecord.empty(); i++) {
        auto pRec = qRecord.top();
        qRecord.pop();
        cout << pRec->fileName << " " << pRec->index << " " <<
            pRec->count << endl;
    }

    return 0;
}