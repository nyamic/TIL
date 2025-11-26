#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b)
{
    int g = gcd(a, b);
    return (a / g) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a < b) {
        int j = a;
        a = b;
        b = j;
    }

    int g = gcd(a, b);
    int l = lcm(a, b);

    cout << g << "\n" << l;

    return 0;
}