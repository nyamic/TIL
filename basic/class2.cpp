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






// // #30802
// // 2025.08.02

// #include <iostream>
// int main() {

//     // 참가자수n, 사이즈별 신청자수 sizeNumber[6], 묶음수T P 받기
//     // 사이즈별신청자수 / T + 1 --> 6번반복해서 합한거 출력
//     // 참가자수 / P + 1 출력, 참가자수 % P 출력

//     using namespace std;
//     cin.tie(NULL);

//     int n, T, P;
//     int sizeNumber[6] = {0};
//     int tNum = 0;

//     cin >> n;

//     for (int i=0; i<6; i++) {
//         cin >> sizeNumber[i];
//     }

//     cin >> T;
//     cin >> P;


//     for (int i=0; i<6; i++) {
//         tNum += sizeNumber[i] / T;

//         if((sizeNumber[i] % T) != 0) {
//             tNum += 1;
//         }
//     }

//     cout << tNum << "\n";


//     cout << n / P << " " << n % P;



//     return 0;
// }




// #18110
// 2025.08.10

// #include <iostream>
// #include <cmath>
// #include <vector>

// int main() {
    
//     using namespace std;
//     cin.tie(NULL);

//     // 의견개수n, opinions[n] 입력
//     // 위아래에서각각몇명뺄지: round(n * 0.15)
//     // 크기대로 정렬 (선택정렬 씀)
//     // 빼고 합계산
//     // round(합 / (n-뺀사람수)) --> 난이도 출력

//     double n, exceptNum;

//     cin >> n;
//     vector<double> opinions(n+1);

//     opinions[n] = 0; //sum대신쓰기

//     for(int i=0; i<n; i++) {
//         cin >> opinions[i];
//     }


//     // 선택정렬
//     // min 위치 변수에 저장 --> min이랑 min있던곳 swap
//     // 이걸 5번반복 (2번째 탐색 2번째 위치부터 시작)


//     for(int i=0; i<n; i++) {

//         double minNum=i, min;

//         //min찾기
//         for(int j=i; j<n-1; j++) {
//             minNum = opinions[minNum] < opinions[j+1] ? minNum : j+1;
//         }

//         //swap
//         min = opinions[minNum];
//         opinions[minNum] = opinions[i];
//         opinions[i] = min;
//     }

//     exceptNum = round(n * 0.15);

//     for(int i=exceptNum; i<n-exceptNum; i++) {
//         opinions[n] += opinions[i];
//     }

//     cout << round(opinions[n] / (n-exceptNum*2));

//     return 0;
// }


// 근데 정렬 직접 안 쓰고 sort 써도 된다함
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     if (n == 0) {
//         cout << 0 << '\n';
//         return 0;
//     }

//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) cin >> a[i];

//     sort(a.begin(), a.end());

//     int exceptNum;
//     exceptNum = (int)round(n * 0.15);

//     long long sum = 0;
//     for (int i = exceptNum; i < n - exceptNum; ++i) sum += a[i];


//     double remain = n - 2 * exceptNum;

//     int ans = (int)round((double)sum / remain);
//     cout << ans << '\n';
//     return 0;
// }