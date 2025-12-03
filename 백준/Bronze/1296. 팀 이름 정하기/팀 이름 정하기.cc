#include <iostream>
#include <string>
using namespace std;

int prob(string yeondooName, string teamName)
{
    int L = 0, O = 0, V = 0, E = 0;

    for (int i = 0; i < yeondooName.size(); i++)
    {
        switch (yeondooName[i])
        {
        case 'L':
            L++;
            break;

        case 'O':
            O++;
            break;

        case 'V':
            V++;
            break;

        case 'E':
            E++;
            break;
        }
    }

    for (int i = 0; i < teamName.size(); i++)
    {
        switch (teamName[i])
        {
        case 'L':
            L++;
            break;

        case 'O':
            O++;
            break;

        case 'V':
            V++;
            break;

        case 'E':
            E++;
            break;
        }
    }

    int ans = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string name;
    cin >> name;

    int n;
    cin >> n;

    int maxProb = -1;
    string maxProbTeamName;

    for (int i = 0; i < n; i++)
    {
        string teamName;
        cin >> teamName;

        int teamProb = prob(name, teamName);

        if (maxProb < teamProb)
        {
            maxProb = teamProb;
            maxProbTeamName = teamName;
        }
        else if (maxProb == teamProb)
        {
            maxProbTeamName = (maxProbTeamName < teamName) ? maxProbTeamName : teamName;
        }
    }

    cout << maxProbTeamName;

    return 0;
}