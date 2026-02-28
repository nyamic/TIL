#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int size = numbers[0].size();

    for (int k = 1; k < 100; k++)
    {
        set<string> s;

        for (int i = 0; i < n; i++)
        {   
            if (s.count(numbers[i].substr(k, size-k))) {
                cout << size-k+1;
                return 0;
            }

            s.insert(numbers[i].substr(k, size-k));
        }
    }

    return 0;
}