#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> teams;

    while (n--)
    {
        string teamName;
        cin >> teamName;

        int teamNumber;
        cin >> teamNumber;

        for (int i = 0; i < teamNumber; i++)
        {
            string memName;
            cin >> memName;
            teams[memName] = teamName;
        }
    }

    while (m--)
    {
        string quizName;
        cin >> quizName;

        int quizType;
        cin >> quizType;

        if (quizType == 0)
        {
            for (auto &[key, value] : teams)
            {
                if (value == quizName) {
                    cout << key << "\n";
                }
            }
        }

        if (quizType == 1)
        {
            cout << teams[quizName] << "\n";
        }
    }

    return 0;
}