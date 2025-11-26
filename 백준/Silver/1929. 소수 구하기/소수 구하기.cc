//한번더풀자

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void isPrime(int n, vector<bool> &is_prime)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    isPrime(n, is_prime);

    for (int i = m; i <= n; i++)
    {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }

    return 0;
}