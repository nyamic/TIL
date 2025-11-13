// #3052 나머지

/*

*/

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;

        arr[i] = a % 42;
    }

    int n = 10;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (arr[i] == arr[j])
            {
                n--;
                break;
            }
        }
    }

    cout << n;

    return 0;
}