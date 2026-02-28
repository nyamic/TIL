#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> s;

    while (n--) {
        string topping;
        cin >> topping;

        if (topping.size() < 6) continue;
        
        if (topping.substr(topping.size()-6, 6) == "Cheese") {
            s.insert(topping);
        }
    }

    if (s.size() >=4) {
        cout << "yummy";
    } else {
        cout << "sad";
    }
    
    return 0;
}