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



 

// 