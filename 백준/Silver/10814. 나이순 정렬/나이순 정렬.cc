#include <bits/stdc++.h>
using namespace std;

struct Person {
    int age;
    string name;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<Person> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i].age >> v[i].name;
    }

    stable_sort(v.begin(), v.end(),
        [](const Person& a, const Person& b) {
            return a.age < b.age;
        }
    );

    for (auto &p : v) {
        cout << p.age << " " << p.name << "\n";
    }

    return 0;
}
