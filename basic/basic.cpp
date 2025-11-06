// #1316 그룹 단어 체커

/*
   그룹 단어가 나올 때 수 세기
   그룹단어 체크하는법(n번반복): size만큼 반복-글자 2개씩 비교해서

   자 생각해보자...
   나온 글자가 다시 나오면 안 되는 것임

   문자 하나 검사할 때:
   배열 하나 만들어 놓고 처음 등장한 문자들 저장
   이 배열에 저장된 적 없는 문자다? 배열에 추가
   있는 문자다? 이전문자랑 지금 문자 같은지 확인

   !지피티가 도움!
   bool alphabet[26] = {false}; --> 알파벳이 나온 적 있는지 표시하는 배열 만들기
   현재 문자가 바로 이전 문자와 다르면
   - 이전에 이 문자가 등장한 적 있는지 alphabet으로 확인
   - 이미 true라면 그룹 단어 아님
   끝까지 문제 없으면 그룹 단어 맞음

   https://chatgpt.com/c/690c8f6b-8530-8323-8f1b-4e91817ebd57
   좀 더 깔끔한 코드 참고해보기
*/

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int n, count = 0;

    cin >> n;

    // 단어n개니까 n번반복
    for (int i = 0; i < n; i++)
    {
        bool alphabet[26] = {false};
        bool isOK = true;
        string s;
        cin >> s;

        // 글자수-1만큼 반복
        for (int j = 0; j < s.length(); j++)
        {
            // 첫 번째 문자면 무조건 alphabet 바꾸고 시작
            if (j == 0)
            {
                alphabet[s[j] - 'a'] = true;
            }
            else
            {
                // 현재 문자가 바로 이전 문자와 다르면
                if (s[j] != s[j - 1])
                {
                    // 이전에 이 문자 등장한 적 있으면 --> 그룹단어x
                    if (alphabet[s[j] - 'a'] == true)
                    {
                        isOK = false;
                        break;
                    }
                    else
                    {
                        // 없으면 --> alphabet 값 변경
                        alphabet[s[j] - 'a'] = true;
                    }
                }
            }
        }

        if (isOK == true) {
            count++;
        }
        
    }

    cout << count;

    return 0;
}