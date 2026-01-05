#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (map.find(x) != map.end())
        {
            map[x]++;
        }
        else
        {
            map[x] = 1;
        }
    }

    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        cout << map[x] << " ";
    }

    return 0;
}