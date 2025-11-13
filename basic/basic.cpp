// #10813 공 바꾸기

/*

*/

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    cin >> m;

    int box[100];
    for (int a = 0; a < n; a++)
    {
        box[a] = a+1;
    }

    for (int b = 0; b < m; b++)
    {
        int i, j, k;
        cin >> i;
        cin >> j;

        k = box[i - 1];
        box[i - 1] = box[j - 1];
        box[j - 1] = k;
    }

    for (int a = 0; a < n; a++)
    {
        cout << box[a] << " ";
    }

    return 0;
}