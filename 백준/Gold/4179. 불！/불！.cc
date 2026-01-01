#include <iostream>
#include <queue>
#include <cmath>
#include <string>
using namespace std;
int R, C;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string board[1001];
int Fdist[1002][1002];
int Jdist[1002][1002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;

    queue<pair<int, int>> JQ;
    queue<pair<int, int>> FQ;

    for (int i = 0; i < R; i++)
    {
        cin >> board[i];

        fill(Jdist[i], Jdist[i] + C, -1);
        fill(Fdist[i], Fdist[i] + C, -1);
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (board[i][j] == 'J')
            {
                JQ.push({i, j});
                Jdist[i][j] = 0;
            }

            if (board[i][j] == 'F')
            {
                FQ.push({i, j});
                Fdist[i][j] = 0;
            }
        }
    }

    // 불이얼마나빨리퍼지니...
    while (!FQ.empty())
    {
        auto cur = FQ.front();
        FQ.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
                continue;
            if (Fdist[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;

            Fdist[nx][ny] = Fdist[cur.first][cur.second] + 1;
            FQ.push({nx, ny});
        }
    }

    while (!JQ.empty())
    {
        auto cur = JQ.front();
        JQ.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                cout << Jdist[cur.first][cur.second] + 1;
                return 0;
            }
            if (Jdist[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            if (Fdist[nx][ny] != -1 && (Fdist[nx][ny] <= Jdist[cur.first][cur.second] + 1))
                continue;

            Jdist[nx][ny] = Jdist[cur.first][cur.second] + 1;
            JQ.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}