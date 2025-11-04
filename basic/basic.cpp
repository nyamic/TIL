// #2869 달팽이는 올라가고 싶다

/*
    v보다 크거나 같을 때까지 반복: +a 확인, -b -->시간초과
    
    day = 1 + ((v-a) / (a-b)) 
*/

#include <iostream>
int main() {
    using namespace std;
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, v, day;
    cin >> a;
    cin >> b;
    cin >> v;

    day = 1 + ((v-a) / (a-b));
    if (((v-a) % (a-b)) != 0) {
        day += 1;
    }

    cout << day;

    return 0;
}