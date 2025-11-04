
// #11653 소인수분해

/*
    2로 나눠
    3로 나눠
    4로 나누면 안되겠지어차피
    5로 나눠

    그러다 1이 되면 끝내


    while
    i=2
    while(n%i==0){
    i 출력
    }
    i++
*/

#include <iostream>
int main() {
    using namespace std;
    cin.tie(NULL);
    cout.tie(NULL);

    int n, i;
    cin >> n;

    i = 2;
    while(true){
        if(n == 1) {
            break;
        }

        if ((n % i) == 0) {
            n /= i;
            cout << i << "\n";
        } else {
            i++;
        }
    }

    return 0;
}