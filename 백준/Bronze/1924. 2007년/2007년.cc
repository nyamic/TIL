#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayCount = 0;
    for (int i = 0; i < x-1; i++) {
        dayCount += days[i];
    }

    dayCount += y;

    string dayName[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    cout << dayName[dayCount % 7];

    return 0;
}