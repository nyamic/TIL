#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    struct score
    {
        string name;
        int kor;
        int eng;
        int math;
    };

    vector<score> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
    }

    sort(v.begin(), v.end(), [](const score &a, const score &b)
         {
        if (a.kor != b.kor) {
            return a.kor > b.kor;
        } 
        else if (a.eng != b.eng)
        {
            return a.eng < b.eng;
        }
        else if (a.math != b.math)
        {
            return a.math > b.math;
        }
        else 
        {
            return a.name < b.name;
        } });

    for (int i = 0; i < n; i++)
    {
        cout << v[i].name << "\n";
    }

    return 0;
}