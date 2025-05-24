// // #4153
/* 
    이게 더 짧고 빠른 듯
    a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a 
*/

// #include<iostream>
// int main() {
//     using namespace std;
//     int a=0, b=0, c=0;
//     int max, s2, s3;

//     while(true) {
//         cin >> a >> b >> c;
//         if(a == 0) break;

//         if(a > b) {
//             if (a > c) {
//                 max = a;
//                 s2 = b;
//                 s3 = c;
//             } else {
//                 max = c;
//                 s2 = a;
//                 s3 = b;
//             }
//         } else {
//             if (b > c) {
//                 max = b;
//                 s2 = a;
//                 s3 = c;
//             } else {
//                 max = c;
//                 s2 = a;
//                 s3 = b;
//             }
//         }

//         if(max*max == s2*s2 + s3*s3) {
//             cout << "right" << "\n";
//         } else {
//             cout << "wrong" << "\n";
//         }
//     }

//     return 0;
// }




// // #1546

// #include <iostream>
// int main() {
//     using namespace std;
//     cin.tie(NULL);

//     double sum=0, max=0;
//     double aver=0, result;
//     double n;
//     cin >> n;

//     for(int i=1; i<=n; ++i)  {
//         double score;
//         cin >> score;

//         sum += score;
//         if (max < score) max = score;
//     }

//     aver = sum / n;
//     result = aver / max * 100.0;

//     cout << result;

//     return 0;
// }

// // 원래평균 = 점수합 / n
// // 최댓값
// // 원래평균 / 최댓값 * 100 = 답






// #
#include <iostream>
int main() {


    return 0;
}