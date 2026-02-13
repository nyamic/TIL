#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char a[13];
    int b[13] = {0};
    int blank, ans = 0;

    for (int i = 0; i < 13; i++)
    {
        cin >> a[i];

        if (a[i] == '*')
        {
            blank = i;
        }
        else
        {
            b[i] = a[i] - '0';
        }
    }

    for (int i = 0; i < 10; i++)
    {
        int sum = 0;
        b[blank] = i;

        for (int j = 0; j < 13; j++)
        {
            if (j == 0 || j % 2 == 0)
            {
                sum += b[j];
            }
            else
            {
                sum += 3 * b[j];
            }
        }

        if (sum % 10 == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}