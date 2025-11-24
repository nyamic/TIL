#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        n *= x;
    }

    string s = to_string(n);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - '0';
        arr[x]++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}