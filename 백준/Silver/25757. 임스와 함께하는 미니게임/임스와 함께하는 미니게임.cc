#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    char game;

    cin >> N >> game;

    set<string> s;

    while (N--) {
        string name;
        cin >> name;

        s.insert(name);
    }

    int gameNum;
    switch (game)
    {
    case 'Y':
        gameNum = 1;
        break;

    case 'F':
        gameNum = 2;
        break;

    case 'O':
        gameNum = 3;
        break;
    }

    cout << s.size() / gameNum;
    
    return 0;
}