#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[20];
    int copyArr[20];

    // 배열 초기화
    for (int i = 0; i < 20; i++)
    {
        arr[i] = i + 1;
    }

    // 역순 10번반복
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            copyArr[j] = arr[j];
        }

        int a, b;
        cin >> a >> b;

        for (int j = a-1; j < b; j++)
        {
            arr[j] = copyArr[a+b-2-j];
        }


    }

    // 결과 출력
    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}