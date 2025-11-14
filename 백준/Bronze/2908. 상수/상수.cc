#include <iostream>
#include <string>
int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, x, y;
    cin >> x >> y;

    a.resize(x.size());
    b.resize(y.size());

    for (int i = 0; i < x.size(); i++)
    {
        a[i] = x[x.size() - i - 1];
    }

    for (int i = 0; i < y.size(); i++)
    {
        b[i] = y[y.size() - i - 1];
    }



    if (stoi(a) >= stoi(b))
    {
        cout << a;
    }
    else
    {
        cout << b;
    }

    return 0;
}