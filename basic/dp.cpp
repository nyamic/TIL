// // #2775 [unfinished]
// #include <iostream>
// int main()
// {   
//     using namespace std;

//     int k, n;
//     int count;

//     cin >> count;

//     for(int i=1; i<=count; ++i)
//     {
//         cin >> k;
//         cin >> n;
//         cout << (0.5*n*n + 0.5*n)*k << "\n"; 
//     }

//     return 0;
// }




// // #2747
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int a=0, b=1, c, n;
//     cin >> n;
    
//     if (n==1)
//     {
//         cout << b;
//     }
//     else
//     {
//         for(int i=2; i<=n; ++i)
//         {
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         cout << c;
//     }

//     return 0;
// }




// // #9655
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int n;
//     cin >> n;

//     if (n%2==0)
//     {
//         cout << "CY";
//     }
//     else
//     {
//         cout << "SK";
//     }

//     return 0;
// }

// //DP로 풀기 --> 모범답안참고하기!!!
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int n;
//     bool isSK = false;
//     cin >> n;

//     while (n>0)
//     {
//         if(n<3)
//         {
//             n -= 1;
//             isSK = (isSK==true) ? false : true;
//         }
//         else
//         {
//             n -= 3;
//             isSK = (isSK==true) ? false : true;
//         }
//     }

//     if(isSK == true)
//     {
//         cout << "SK";
//     }
//     else
//     {
//         cout << "CY";
//     }
    
//     return 0;
// }





// 프로그래머스 거스름돈
// https://school.programmers.co.kr/learn/courses/30/lessons/12907

//블로그참고... [unfinished]
//https://velog.io/@717lumos/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EB%8F%99%EC%A0%81%EA%B3%84%ED%9A%8D%EB%B2%95Dynamic-Programming-DP

#include <iostream>
int main()
{
    using namespace std;

    int dp[1000];
    int n;
    int i;

    cin >> n;
    int money[n+1];
    for(i=0; i<n; ++i)
    {
        cin >> money[i];
    }


    n - i

    return 0;
}





// #1463 [memo] [red]
/* 
    vertor<int> 벡터 쓰는 이유: 
    동적으로 배열 크기 정할 수 있음
    초기화가 간편함
*/
// #include <iostream>
// #include <vector>
// #include <algorithm>
// int main()
// {
//     using namespace std;

//     int n; 
//     cin >> n;

//     vector<int> dp(n+1, 5001);
//     dp[0] = 0;

//     for(int i=3; i<=n; ++i) {
//         if (i >= 3 && dp[i-3] != 5001) {
//             dp[i] = min(dp[i], dp[i-3]+1);
//         }
//         if (i >=5 && dp[i-5] != 5001) {
//             dp[i] = min(dp[i], dp[i-5]+1);
//         }
//     }

//     if (dp[n] == 5001) {
//         cout << -1 << "\n";
//     } else {
//         cout << dp[n] << "\n";
//     }

//     return 0;
// }





// #1010 [unfinished]
#include <iostream>
int main()
{
    using namespace std;
    int T, m, n;
    cin >> T;

    int dp[30];
    dp[0] = 1;

    for(int i=1; i<=T; ++i)
    {
        cin >> m >> n;
    }

    return 0;
}