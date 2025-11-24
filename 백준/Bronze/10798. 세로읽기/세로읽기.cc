#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v(5);
    int s_size[5];
    int s_maxSize[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        s_size[i] = v[i].size();
        s_maxSize[i] = v[i].size();
    }

    sort(s_maxSize, s_maxSize + 5, greater<>());

    for (int i = 0; i < s_maxSize[0]; ++i)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s_size[j] > i)
            {
                cout << v[j][i];
            }
        }
    }

    return 0;
}