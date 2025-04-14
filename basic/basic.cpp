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





//