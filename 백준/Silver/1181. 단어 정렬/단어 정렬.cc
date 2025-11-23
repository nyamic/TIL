#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> s;

    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;
        s.insert(x);
    }

    vector<string> v{s.begin(), s.end()};

    sort(v.begin(), v.end(), [](const string &a, const string &b)
         {
        if (a.size() != b.size()) {
             return a.size() < b.size();
        } 
    
        return a < b; });

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    return 0;
}