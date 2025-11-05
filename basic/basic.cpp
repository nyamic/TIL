

// #10828 스택

/*
    n입력
    n번반복: 명령어판단
    명령어마다 함수

    push:
    pop
    size
    empty
    top

    !해설지가도움!
*/

#include <iostream>
#include <stack>
#include <string>
int main()
{
    using namespace std;

    stack<int> s;
    string command;
    int n;
    int num, result = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> command;

        if (command == "push") {
            cin >> num;
            s.push(num);
        }

        else if (command == "pop") {
            if (s.size() == 0) {
                result = -1;
                cout << result << "\n";
            } else {
                result = s.top();
                cout << result << "\n";
                s.pop();
            }
        }

        else if (command == "size") {
            cout << s.size() << "\n";
        }

        else if (command == "empty") {
            cout << s.empty() << "\n";
        }

        else if (command == "top") {
            if (s.size() == 0) {
                result = -1;
                cout << result << "\n";
            } else {
                result = s.top();
                cout << result << "\n";
            }
        }
    }

    return 0;
}