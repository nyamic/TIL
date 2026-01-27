#include <bits/stdc++.h>
using namespace std;
int board[27][27];
int vis[27][27];
int numHouse[27];
int n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++)
        {
            board[i][j] = line[j] - '0';
        }
    }

    int totalHouseNum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0 || vis[i][j])
                continue;
            totalHouseNum++;

            queue<pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({i, j});
            numHouse[totalHouseNum] = 1; // 시작점 카운트

            while (!Q.empty())
            {
                pair<int, int> cur = Q.front();
                Q.pop();

                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != 1)
                        continue;

                    numHouse[totalHouseNum]++; // 인접한 집 카운트
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
        }
    }

    cout << totalHouseNum << "\n";

    sort(numHouse + 1, numHouse + totalHouseNum + 1);
    for (int i = 1; i <= totalHouseNum; i++) {
        cout << numHouse[i] << "\n";
    }

    return 0;
}