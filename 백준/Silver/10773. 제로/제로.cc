#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    stack<int> st;

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            st.pop();
        }
        else
        {
            st.push(x);
        }
    }

    int sum = 0;
    int size = st.size();

    for (int i = 0; i < size; i++)
    {
        sum += st.top();
        st.pop();
    }

    cout << sum;

    return 0;
}