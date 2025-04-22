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
