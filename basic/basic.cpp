// // #25314
// #include <iostream>
// int main(){
//     int number = 0;
//     std::cout << "몇 바이트인지 입력: ";
//     std::cin >> number;

//     int i = number / 4;
//     if(number%4 == 0){
//         while(i>0){
//             std::cout << "long ";
//             --i;
//         }
//         std::cout << "int";
//     }else{
//         while(i+1>0){
//             std::cout << "long ";
//             --i;
//         }
//         std::cout << "int";
//     }
   

//     return 0;
// }




// // #10926
// #include <iostream>
// #include <string>

// int main(){
//     std::string username;
//     std::cin >> username;

//     std::cout << username << "?\?!";

//     return 0;
// }




// // #11382
// #include <iostream>
// using namespace std;

// int main(){
//     long long a, b, c;
//     cin >> a >> b >> c;
//     cout << a+b+c;

//     return 0;
// }





// //#10171 고양이
// #include <iostream>
// int main(){
//     using namespace std;

//     cout << "\\    /\\ \n";
//     cout << " )  ( \') \n";
//     cout << "(  /  ) \n";
//     cout << " \\(__)| \n";

//     return 0;
// }





// // #10172
// #include <iostream>
// int main() {
//     using namespace std;

//     cout << "|\\_/| \n";
//     cout << "|q p|   /} \n";
//     cout << "( 0 )\"\"\"\\ \n";
//     cout << "|\"^\"`    | \n";
//     cout << "||_/=\\\\__| \n";

//     return 0;
// }





// // #2588
// #include <iostream>
// int main(){
//     using namespace std;

//     int number1, number2;
//     cin >> number1 >> number2;

//     int ones, tens, hundreds;
//     hundreds = number2 * 0.01;
//     tens = (number2 * 0.1) - (hundreds * 10);
//     ones = number2 - (hundreds * 100) - (tens * 10);

//     cout << number1 * ones << endl;
//     cout << number1 * tens << endl;
//     cout << number1 * hundreds << endl;
//     cout << number1 * number2;

//     return 0;
// }




// // #10430
// #include <iostream>
// int main(){
//     using namespace std;

//     int A, B, C;
//     cin >> A >> B >> C;

//     cout << (A+B)%C << endl;
//     cout << ((A%C) + (B%C))%C << endl;
//     cout << (A*B)%C << endl;
//     cout << ((A%C) * (B%C))%C << endl;

//     return 0;
// }





// // #1330
// #include <iostream>
// int main(){
//     using namespace std;

//     int numberA, numberB;
//     cin >> numberA >> numberB;

//     if(numberA > numberB)
//     {
//         cout << ">" << endl;
//     }
//     else if(numberA < numberB)
//     {
//         cout << "<" << endl;
//     }
//     else{
//         cout << "==" << endl;
//     }

//     return 0;
// }



// // #2753
// #include <iostream>
// int main(){
//     using namespace std;

//     int year;
//     cin >> year;

//     int isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//     cout << isLeapYear;

//     // if ((year % 4 == 0) && (year % 100 != 0) )
//     // {
//     //     cout << 1;
//     // }
//     // else
//     // {
//     //     cout << 0;
//     // }

//     return 0;
// }






// // #9498
// #include <iostream>
// int main(){
//     using namespace std;

//     int score;
//     cin >> score;

//     if(score >= 90)
//     {
//         cout << "A";
//     }
//     else if (score >= 80)
//     {
//         cout << "B"; 
//     }
//     else if (score >= 70)
//     {
//         cout << "C"; 
//     }
//     else if (score >= 60)
//     {
//         cout << "D"; 
//     }
//     else
//     {
//         cout << "F";
//     }
    

//     return 0;
// }




// // #2480
// #include <iostream>
// int main()
// {
// 	using namespace std;

// 	int dice1, dice2, dice3;
// 	int prize = 0;
// 	cin >> dice1 >> dice2 >> dice3;

// 	if ((dice1 == dice2) && (dice1 == dice3))
// 	{
// 		prize = 10000 + dice1 * 1000;
// 	}
// 	else if ((dice1 == dice2) || (dice2 == dice3) || (dice1 == dice3))
// 	{
// 		prize = (dice2 == dice3) ? (1000 + dice2 * 100) : (1000 + dice1 * 100);
// 	}
// 	else
// 	{
// 		if (dice1 > dice2)
// 		{
// 			prize = (dice1 > dice3) ? dice1*100 : dice3*100;
// 		}
// 		else
// 		{
// 			prize = (dice2 > dice3) ? dice2 * 100 : dice3 * 100;
// 		}
// 	}

// 	cout << prize;

// 	return 0;
// }








// // #2884
// #include <iostream>
// int main() {
// 	using namespace std;

// 	int minutes, hours;
// 	cin >> hours >> minutes;

//     if (minutes >= 45)
//     {
//         minutes -= 45;
//     }
//     else
//     {
//         hours = (hours == 0) ? 23 : hours-1;
//         minutes = 60 - (45 - minutes);
//     }

//     cout << hours << " " << minutes;

// 	return 0;
// }






// // #2525
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int hours, minutes, cookingTime;
//     cin >> hours >> minutes;
//     cin >> cookingTime;

//     minutes += cookingTime;
    
//     while(minutes >= 60)
//     {
//         hours = (hours == 23) ? 0 : hours+1;
//             minutes -= 60;
//     }

//     cout << hours << " " << minutes;

//     return 0;
// }






// // #14681
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int x, y, QuadrantN;
//     cin >> x >> y;


//     if(x > 0)
//     {
//         QuadrantN = (y > 0) ? 1 : 4; 
//     }else
//     {
//         QuadrantN = (y > 0) ? 2 : 3; 
//     }

//     cout << QuadrantN;


//     return 0;
// }




// // #2438
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int n;
//     cin >> n;


//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//            cout << "*";
//         }
        
//         cout << endl;
//     }
    
//     return 0;
// }






// // #25304
// #include <iostream>
// int main(){
//     using namespace std;

//     int receiptTotalPrice, numberOfItemsType;
//     cin >> receiptTotalPrice;
//     cin >> numberOfItemsType;

//     int priceArray[numberOfItemsType];
//     int numberArray[numberOfItemsType];
//     int i = 0;
//     while(i < numberOfItemsType)
//     {
//         cin >> priceArray[i] >> numberArray[i];
//         ++i;
//     }

//     int totalPrice = 0;
//     for(i = 0; i < numberOfItemsType; ++i)
//     {
//         totalPrice += priceArray[i] * numberArray[i];
//     }

//     (receiptTotalPrice == totalPrice) ? cout<<"Yes" : cout<<"No";

//     return 0;
// }




// // #27323
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int a, b;
//     cin >> a >> b;
//     cout << a*b;

//     return 0;
// }





// #9063
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int dotsNumber;
//     cin >> dotsNumber;

//     int minX, maxX, minY, maxY;
//     int x, y;
//     cin >> x >> y;
//     minX = x; maxX = x;
//     minY = y; maxY = y;
//     for(int i = 2; i <= dotsNumber; ++i)
//     {
//         cin >> x >> y;

//         if(x < minX) minX=x;
//         if(x > maxX) maxX=x;
//         if(y < minY) minY=y;
//         if(y > maxY) maxY=y;
//     }

//     cout << (maxX-minX) * (maxY-minY);

//     return 0;
// }





// // #1085
// #include <iostream>
// int main()
// {
//     int x, y, w, h;
//     std::cin >> x >> y >> w >> h;

//     int min = (x <= y) ? x : y;
//     if((w-x) < min) min=(w-x);
//     if((h-y) < min) min=(h-y);

//     std::cout << min;

//     return 0;
// }






// // #2439
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; ++i)
//     {
//         for(int j = n-i; j > 0; --j)
//         {
//             cout << " ";
//         }

//         for(int k = i; k > 0; --k)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }





// // #10950
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int repeatNumber;
//     int a, b;
//     cin >> repeatNumber;

//     for(int i = 1; i <= repeatNumber; ++i)
//     {
//         cin >> a >> b;
//         cout << a + b << "\n";
//     }

//     return 0;
// }





// // #27866
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;

//     string word;
//     cin >> word;

//     int i;
//     cin >> i;

//     cout << word[i-1];

//     return 0;
// }







// // #10952
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int a = 1;
//     int b = 1;

//     while(a != 0)
//     {
//         cin >> a >> b;
//         if(a == 0) break;
//         cout << a + b << "\n";
//     }

//     return 0;
// }




// // #11022
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int a, b, t;
//     cin >> t;

//     for(int i = 1; i <= t; ++i)
//     {
//         cin >> a >> b;
//         cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << "\n";
//     }

//     return 0;
// }



 

// // #2501
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int n, k;
//     cin >> n >> k;

//     int currentNum = 1, factorNum = 0;
//     while(factorNum <= k)
//     {
//         if((n % currentNum) == 0)
//         {
//             ++factorNum;
//         }

//         if(factorNum == k) break;
//         if(currentNum == n) break;
    
//         currentNum++;
//     }

//     if(factorNum < k)
//     {
//         cout << 0;
//     }
//     else
//     {
//         cout << currentNum;
//     }

//     return 0;
// }





// // #2581 [unfinished]
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int m, n;
//     cin >> m >> n;



//     return 0;
// }




// // #2558
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int a, b;
//     cin >> a;
//     cin >> b;

//     cout << a+b;

//     return 0;
// }



// // #10951 [red]
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int a, b;
//     while(cin >> a >> b)
//     {
//         cout << a+b << endl;
//     }

//     return 0;
// }








// #10953 [red] [memo] [unfinished]

/* 
    getline(cin, s): 공백을 포함한 한 줄 전체를 문자열 s에 입력받는 함수
    string::find(찾고싶은문자숫자등등): 특정 값 있는 인덱스 구하기기 
    string::substr(a, b): 인덱스 a부터 b개 자르기
    stringstream

    문자 0~9 아스키코드 값은 연속적이므로, (문자형숫자)-(0의 아스키코드값)=정수형숫자
    ex) 문자'1'-문자'0'=정수1
    stoi(변환할문자열), atoi(변환할문자): 문자열 전체를 정수로 변환하는 함수


    gemini 코드

    #include <iostream>
    #include <string>

    int main() {
    using namespace std;

    int t;
    cin >> t;
    cin.ignore(); // cin >> t 후에 남아있는 개행 문자 처리

    for (int i = 0; i < t; ++i) {
        string s;
        getline(cin, s);

        size_t commaPos = s.find(',');  //size_t: 부호없는정수형 크기 나타낼 때 사용용

        string aStr = s.substr(0, commaPos);
        string bStr = s.substr(commaPos + 1);

        int a = stoi(aStr);
        int b = stoi(bStr);

        cout << a + b << endl;
    }

    return 0;
}


*/


// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;

//     string s;
//     int t, a, b;
//     cin >> t;

//     for (int i = 1; i <= t; ++i)
//     {
//         cin >> s;
//         a = s[0];
//         b = s[2];

//         cout << a + b << endl;
//     }


//     return 0;
// }






// #11718 [red] [memo]

/*
    cin: 
        <iostream>에 포함되어 있음
        공백이나 개행 입력 시 공백 이전까지의 값만 결과로 받아들임
        ex) Hello World! 입력 시 Hello까지밖에 입력 안 됨
        개행 문자(\n)를 입력 버퍼에 남겨둠
        
    getline(cin, 변수명):
        띄어쓰기 포함한 문자열 한 줄 전체를 입력 받을 때
        엔터 만날 때까지 입력받음
*/

// #include <iostream>

// int main()
// {
//     using namespace std;

//     string s;

//     while(true)
//     {
//         getline(cin, s);
//         if(s == "") break;

//         cout << s << endl;
//     }

//     return 0;
// }





// // #15463 [orange] [unfinished]
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int a[4], b[4], c[4];
//     cin << a[0] << a[1] << a[2] << a[3];
//     cin << b[0] << b[1] << b[2] << b[3];
//     cin << c[0] << c[1] << c[2] << c[3];


    

//     return 0;
// }





// // #11719
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;

//     string s;
//     int emptySpace = 0;

//     while(getline(cin, s))
//     {
//         cout << s << endl;
//     }

//     return 0;
// }

        // getline(cin, s);

        // if (s == "") 
        // {
        //     emptySpace += 1;
        // }
        // else
        // {
        //     emptySpace = 0;
        // }

        // if (emptySpace >= 2) break;






// // #11720 [memo]
// // stoi: string to int, 아스키코드값 반환하는듯
// // string --> int 바꾸고싶으면 그냥 int형 변수에 string - 0 을 대입해버리기기
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;

//     string numbers;
//     int n, sum = 0;

//     cin >> n;
//     cin >> numbers;

//     for(int i = 0; i < n; ++i)
//     {
//          sum += numbers[i] - '0';
//     }

//     cout << sum;

//     return 0;
// }






// #2741 [memo]

/* 
    for문 작성 시 빠른 입출력 사용 필요
    - endl보다 \n가 빠르다
    - cin.tie(NULL) 적용
    - ios::sync_with_stdio(false) 적용

    ex) cout << "Enter name: ";
        cin >> name;
    cin과 cout이 묶여 있는 경우(tie)
        :"Enter name: "이 먼저 출력되고 이후 사용자에게 입력을 요청함
         이 경우 cin은 입력을 받기 전 출력 버퍼를 비우는 작업을 해야 함
         => 비교적 속도 느림
    untie일 경우 입력 먼저 요청, 이후 "Enter name: " 출력이므로
    입력 전 출력버퍼 비우는 작업을 하지 않아도 됨

    sync_with_stdio(false)
    C 표준 스트림(stdio)와 C++ 표준 스트림(iotream) 동기화를 비활성화시킴
    동기화 활성화: C 표준스트림 버퍼와 C++의 버퍼를 모두 사용해서 딜레이 발생
    동기화 비활성화: C++만 버퍼 사용해서 쓰는 버퍼 수 감소 -> 실행속도 향상
    **비활성화시 C에서 쓰는 입출력함수 사용하면 안 됨


    <버퍼(buffer)란?>
    데이터를 한 곳에서 다른 한 곳으로 전송하는 동안 일시적으로 그 데이터를 보관하는 메모리 영역역
    입출력시 많이 사용
    입출력 버퍼를 사용하지 않는다면?
     :입출력을 할 때마다 데이터를 1바이트씩 처리하게 되면
      CPU 사용횟수, 메모리 접근횟수가 증가하여 부하 가중됨
      버퍼 사용하면 데이터를 일정 크기만큼 모아두었다 처리 -> 부하감소소
    *버퍼를 비운다 = 버퍼에 저장된 데이터가 버퍼를 떠나 목적지로 전송된다
    https://blog.naver.com/harang8069/222426218462
    
    <스트림(stream)이란?>
    입력장치-응용프로그램-출력장치 연결시키기 위해 사용하는 매개체
         
*/

// #include <iostream>
// int main()

// {
//     using namespace std;
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);

//     int n;
//     cin >> n;

//     for (int i=1; i<=n; ++i)
//     {
//         cout << i << "\n";
//     }

//     return 0;
// }





// // #2742
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);

//     int n;
//     cin >> n;

//     for(int i=n; i>=1; --i)
//     {
//         cout << i << "\n";
//     }

//     return 0;
// }




// // #2739
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int n;
//     cin >> n;

//     for(int i=1; i<=9; ++i)
//     {
//             cout << n << " * " << i << " = " << n*i << "\n";
//     }

//     return 0;
// }





// // #10869
// #include <iostream>
// int main()
// {
//     int a, b;
//     std::cin >> a >> b;

//     std::cout << a+b << "\n";
//     std::cout << a-b << "\n";
//     std::cout << a*b << "\n";
//     std::cout << a/b << "\n";
//     std::cout << a%b << "\n";

//     return 0;
// }





// // #11021
// #include <iostream>
// int main()
// {
//     using namespace std;

//     int n, a, b;
//     cin >> n;

//     for(int i=1; i<=n; ++i)
//     {
//         cin >> a >> b;
//         cout << "Case #" << i << ": " << a+b << "\n";
//     }

//     return 0;
// }




// // #8393
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int n, sum=0;
//     cin >> n;

//     for(int i=1; i<=n; ++i)
//     {
//         sum += i;
//     }

//     cout << sum;

//     return 0;
// }




// // #25083
// #include <iostream>
// int main()
// {
//     using namespace std;

//     cout << "         ,r\'\"7 \n"; 
//     cout << "r`-_   ,\'  ,/ \n"; 
//     cout << " \\. \". L_r\' \n"; 
//     cout << "   `~\\/ \n"; 
//     cout << "      | \n"; 
//     cout << "      | \n"; 

//     return 0;
// }






// // #15552
// // cin.tie(NULL); 쓰면 아예 입력 한 번에 다 받고 출력을 하는 거였음음
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);

//     int n, a, b;
//     cin >> n;

//     for(int i=0; i<n; ++i)
//     {
//         cin >> a >> b;
//         cout << a + b << "\n";
//     }

//     return 0;
// }




// #10818 [memo]
// 문자열 파싱을 넣으면 시간초과가 뜬다.. . .   . 

/*  for문 안에 넣었던 문자열 파싱 코드

    size_t blankPos = str.find(' ');
        if(blankPos == string::npos)
        {
            str2 = str;
        }
        else
        {
            str2 = str.substr(0, blankPos);
            str = str.substr(blankPos+1);
        }
            int num = stoi(str2);
*/ 
        
        
        
// #include <iostream>
// #include <cmath>
// #include <string>
// #include <climits>
// int main()
// {
//     using namespace std;
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ios::sync_with_stdio(false);

//     int n;
//     int min = INT_MAX;
//     int max = INT_MIN;

//     cin >> n;

//     int num;
//     for(int i=0; i<n; ++i)
//     {        
//         cin >> num;

//         if (num>max)
//             max = num;

//         if (num<min)
//             min = num;
//     }

//     cout << min << " " << max;

//     return 0;
// }



// // #2440
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int n;

//     cin >> n;
//     for(int i=n; i>0; --i)
//     {
//         for(int j=0; j<i; ++j)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }

//     return 0;
// }





// // #2441
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int n;

//     cin >> n;
//     for(int i=n; i>0; --i)
//     {
//         for(int k=0; k<n-i; ++k)
//         {
//             cout << " ";
//         }

//         for(int j=0; j<i; ++j)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }

//     return 0;
// }



// // #2442
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int n;
//     cin >> n;

//     for(int i=1; i<=n; ++i)
//     {
//         for(int j=0; j<n-i; ++j)
//         {
//             cout << " ";
//         }

//         for(int k=0; k<2*i-1; ++k)
//         {
//             cout << "*";
//         }
        
//         cout << "\n";
//     }

//     return 0;
// }




// // #11721 [unfinished]
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     string s, p;
//     int strSize;

//     cin >> s;
//     strSize = s.size();
    
//     for(int i=0; i<strSize*0.1; ++i)
//     {
//         cout << s.substr(i*10, (i+1)*10) << "\n";
//     }
    
//     if (strSize%10!=0)
//     {
//         cout << s.substr((int)(strSize*0.1)*10) << "\n";
//     }

//     return 0;
// }





// // #9086
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;

//     int n;
//     cin >> n;

//     string s;

//     for(int i=0; i<n; ++i)
//     {
//         cin >> s;
//         cout << s[0] << s[s.size()-1] << "\n";
//     }

//     return 0;
// }






// // #10810
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int n, m;
//     cin >> n >> m;

//     int basket[n] = {0}; 

//     for(int h=0; h<m; ++h) {
//         int i, j, k;
//         cin >> i >> j >> k;

//         for(int l=i-1; l<j; ++l) {
//             basket[l] = k;
//         }
//     }

//     for(int f=0; f<n; ++f) {
//         cout << basket[f] << " ";
//     }   

//     return 0;
// }





// // #10811
// #include <iostream>
// int main() {
//     using namespace std;

//     int n, m;
//     cin >> n >> m;

//     int arr[n]={0};
//     for(int i=1; i<=n; ++i) {
//         arr[i-1] = i;
//     }
//     int arr2[n]={0};
//     for(int i=1; i<=n; ++i) {
//         arr2[i-1] = i;
//     }

//     for(int i=0; i<m; ++i) {
//         int k, h;
//         cin >> k >> h;

//         for(int j=k; j<=h; ++j) {
//           arr[j-1] = arr2[h-(j-k)-1];
//         }

//         for(int a=0; a<n; ++a) {
//             arr2[a] = arr[a];
//         }
//     }

//     for(int i=0; i<n; ++i) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// #1978
// #include <iostream>
// int main() {
//     using namespace std;
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ios::sync_with_stdio(false);

//     int n, a, prime;
//     cin >> n;
//     prime = n;

//     for(int i=0; i<n; ++i) {
//         cin >> a;
        
//         if(a==1) {
//             prime -= 1;
//             continue;
//         }

//         for(int j=2; j<a; ++j) {
//             if(a!=j && a%j==0) {
//                 prime -= 1;
//                 break;
//             }
//         }
//     }

//     cout << prime;

//     return 0;
// }





//// #10807
//#include <iostream>
//int main() {
//	using namespace std;
//
//	int n, v, vNum=0; 
//	cin >> n;
//
//	int arr[100] = { 0 };
//
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//	}
//
//	cin >> v;
//
//	for (int i = 0; i < n; ++i) {
//		if (arr[i] == v) {
//			vNum += 1;
//		}
//	}
//
//	cout << vNum;
//
//	return 0;
//}





// // #11654

// #include <iostream>
// int main() {
// 	using namespace std;

// 	char a;
// 	cin >> a;
// 	cout << (int)a;

// 	return 0;
// }




// #10871
//#include <iostream>
//#include <vector>
//int main() {
//	using namespace std;
//
//	int n, x;
//	cin >> n >> x;
//
//	vector<int> A(n);
//	
//	for (int i = 0; i < n; ++i) {
//		cin >> A[i];
//		if (A[i] < x) {
//			cout << A[i] << " ";
//		}
//	}
//
//	return 0;
//}




// #5597
//#include <iostream>
//int main() {
//	using namespace std;
//
//	int submit[30] = { 0 };
//	int n;
//
//
//	for (int i = 0; i < 28; ++i) {
//		cin >> n;
//		submit[n - 1] = n;
//	}
//
//	for (int i = 0; i < 30; ++i) {
//		if (submit[i] != i + 1) {
//			cout << i+1 << "\n";
//		}
//	}
//
//	return 0;
//}




//// 2562
//#include <iostream>
//int main() {
//	using namespace std;
//
//	int arr[9] = { 0 };
//	int num, max = 0;
//			
//	for (int i = 0; i < 9; ++i) {
//		cin >> arr[i];
//		if (max < arr[i]) {
//			max = arr[i];
//			num = i+1;
//		}
//	}
//
//	cout << max << "\n";
//	cout << num;
//
//	return 0;
//}






// // #2738
// #include <iostream>
// #include <vector>
// int main() {
//     using namespace std;

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> matA(n, vector<int>(m,0));
//     vector<vector<int>> matB(n, vector<int>(m,0));

//     for(int i=0; i<n; ++i) {
//         for(int j=0; j<m; ++j) {
//             int num;
//             cin >> num;
//             matA[i][j] = num;
//         }
//     }

//     for(int i=0; i<n; ++i) {
//         for(int j=0; j<m; ++j) {
//             int num;
//             cin >> num;
//             matB[i][j] = num;
//         }
//     }

//     for(int i=0; i<n; ++i) {
//         for(int j=0; j<m; ++j) {
//             cout << matA[i][j] + matB[i][j] << " ";
//         }
//         cout << "\n";
//     }



//     return 0;
// }




// [unfinished] 2차원배열 단어 수 세기
// #include <iostream>
// #include <string>
// int main() {
//     using namespace std;

//     string str;
//     getline(cin, str);
//     size_t charNum = str.size();
//     int num = 0;
//     int pastLoc=0;
    
    
//     while(pastLoc != str.find(' ')) {
        
//     }



//     // for(int i=0; i<charNum; ++i) {
//     //     if (str[i] == ' ') {
//     //         if (i==0) continue;
//     //         num += 1;
//     //     }
//     // }

//     cout << num + 1;

//     return 0;
// }




// // #2444 [purple]
//    냅다 풀지 말고 머리를 쓸 것

/*
Q. 입력: 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
   출력: 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

    
#include <stdio.h>
#include <math.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = -N + 1; i < N; i++){
        for (int j = 0; j < 2*N -abs(i) -1; j++)
            putchar(j < abs(i) ? 32 : '*');
        putchar(10);
    }
}
*/


// #include <iostream>
// int main() {
//     using namespace std;

//     int n;
//     cin >> n;

//     for(int i=1; i<=n; ++i) {

//         for(int j=i; j<n; ++j) {
//             cout << " ";
//         }

//         for(int k=1; k<=2*i-1; ++k) {
//             cout << "*";
//         }

//         cout << "\n";
//     }


//     for(int i=n-1; i>0; --i) {

//         for(int j=i; j<n; ++j) {
//             cout << " ";
//         }

//         for(int k=1; k<=2*i-1; ++k) {
//             cout << "*";
//         }

//         cout << "\n";
//     }

//     return 0;
// }




// // #3003
// #include <iostream>
// int main() {
//     using namespace std;
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int existing[6] = {1, 1, 2, 2, 2, 8};

//     for(int i=0; i<6; ++i) {
//         int n;
//         cin >> n;
//         existing[i] -= n;
//         cout << existing[i] << " ";
//     }

//     return 0;
// }





// #2745
#include <iostream>
#include <vector>
#include <string>
int main() {
    using namespace std;

    string n;
    int decimal=0, result=0;

    cin >> n >> decimal;

    size_t nSize = n.size();

    for(int i=0; i<nSize; ++i) {

        int a=1;
        for(int j=1; j<nSize-i; ++j) {
            a *= decimal;
        }

        result += (int)(n[i]-'A'+10) * a;
    }

    cout << result;

    return 0;
}