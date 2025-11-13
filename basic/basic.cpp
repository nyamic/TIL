// #10809 알파벳 찾기

/*
    배열 한 번에 같은 값으로 초기화하는 법
*/

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int alph[26];
    for (int i = 0; i < 26; i++)
    {
        alph[i] = -1;
    }
    

    for (int i = 0; i < s.size(); i++)
    {
        if (alph[s[i] - 'a'] == -1)
        {
            alph[s[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alph[i] << " ";
    }

    return 0;
}