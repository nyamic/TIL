#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    string result;
    int maxCount = 0;
    
    // map을 직접 순회 (map은 자동으로 key 기준 사전순 정렬됨)
    for (auto& p : m)
    {
        if (p.second > maxCount)
        {
            maxCount = p.second;
            result = p.first;
        }
    }

    cout << result;

    return 0;
}