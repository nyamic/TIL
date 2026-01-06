// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string s = "";
//     string line;

//     while (getline(cin, line) && !line.empty()) {
//         s += line + "\n"; 
//     }

//     cout << s;

//     stack<char> st;

//     bool isBalanced = true;

//     int size = s.size();
//     for (int i = 0; i < size; i++)
//     {
//         if (s[i] == '(' || s[i] == '[')
//             st.push(s[i]);

//         if (s[i] == ')')
//         {
//             if (st.empty()) isBalanced = false; continue;

//             if (st.top() == '(')
//             {
//                 st.pop();
//             }
//         }

//         if (s[i] == ']')
//         {
//             if (st.empty()) isBalanced = false; continue;

//             if (st.top() == '[')
//             {
//                 st.pop();
//             }
//         }

//         if (s[i] == '.')
//         {
//             if (s[i-1] == '.') break;

//             if (!st.empty())
//             {
//                 isBalanced = false;

//                 while (!st.empty())
//                 {
//                     st.pop();
//                 }
//             }

//             if (isBalanced)
//             {
//                 cout << "yes" << "\n";
//             }
//             else
//             {
//                 cout << "no" << "\n";
//             }

//             isBalanced = true;
//         }
//     }

//     return 0;
// }



#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        string st;
        int x;
        cin >> st;
        
        if (st == "add") {
            cin >> x;
            s.insert(x);
        }

        if (st == "remove") {
            cin >> x;
            s.erase(x);
        }

        if (st == "check") {
            cin >> x;
            cout << s.count(x) << "\n";
        }

        if (st == "toggle") {
            cin >> x;
            if (s.count(x)) {
                s.erase(x);
            } else {
                s.insert(x);
            }
        }

        if (st == "all") {
            for (int j = 1; j <= 20; j++) {
                s.insert(j);
            }
        }

        if (st == "empty") {
            s.clear();
        }
    }

    return 0;
}