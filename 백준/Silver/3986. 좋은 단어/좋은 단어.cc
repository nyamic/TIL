#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;

    while (n--)
    {
        stack<char> st;

        string input;
        cin >> input;
        for (int i = 0; i < input.size(); i++)
        {
            // st에 없으면 --> 넣기
            //  있으면 --> 같으면 빼기, 다르면 넣기
            if (st.empty())
            {
                st.push(input[i]);
            }
            else
            {
                if (st.top() == input[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(input[i]);
                }
            }
        }

        if (st.empty()) {
            count++;
        }
    }

    cout << count;

    return 0;
}