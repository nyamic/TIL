// #1193 분수찾기

/*
    1/1

    1/2
    2/1

    3/1 
    2/2 
    1/3

    1/4 j
    2/3
    3/2
    4/1

    i=5 j=
    5/1 i/1
    4/2 (x-1)/
    3/3 (x-2)
    2/4 (x-3)
    1/5 (x-4)

    반복: j, i 알아내기
    분수: (i-(j-1))/j

    /이게 분수로 입력이 되나흠


    1 3 6 10 15 21 28 36 45 55
*/

#include <iostream>
int main() {
    using namespace std;
    cin.tie(NULL);
    cout.tie(NULL);

    int i, j, cumul=0, x;
    cin >> x;

    i = 1;
    while (true) {
        cumul += i;

        if (cumul >= x) {
            j = x - (cumul - i);
            break;
        }

        i++;
    }

    if ((i%2)==0) {
        cout << j << "/" << i-j+1;
    } else {
        cout << i-j+1 << "/" << j;
    }

    return 0;
}