#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[1000];

    int count = 1;
    int pos = 0;
    while (pos < 1000)
    {

        for (int i = 0; i < count; i++)
        {
            arr[pos] = count;
            pos++;

            if (pos >= 1000) {
                break;
            }
        }

        if (pos >= 1000) {
                break;
            }

        count++;
    }

    int a, b;
    cin >> a >> b;
    
    int sum = 0;
    for (int i = a-1; i < b; i++) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}