#include <iostream>
using namespace std;

// int main(){
//     int n = -45;

//     if (n >= 0){
//         cout << "n is positive number \n";
//     }else {
//         cout << "n is negative";
//     }

//     return 0;
// }

// int main(){
//     int age ;
//     cout << "Enter your age : ";
//     cin >> age;

//     if (age >= 18){
//         cout << "You are eligible for voteing";
//     }else {
//         cout << "You are not eligible for voting";
//     }

//     return 0;
// }



// int main() {
//     int n ;
//     cout << "Enter the number : ";
//     cin >> n;

//     if (n%2 == 0){
//         cout << "Number is even";
//     }else{
//         cout << "Number is odd";
//     }

//     return 0;
// }



// int main (){
//     int marks;
//     cout << "Enter your marks : ";
//     cin >> marks;

//     if ( marks >= 90){
//         cout << "Your Grade is A.";
//     } else if (marks >= 80 && marks < 90){
//         cout << "Your Grade is B.";
//     }else{
//         cout << "Your Grade is C.";
//     }

//     return 0;
// }


// int main(){
//     char ch;
//     cout << "Enter a character : ";
//     cin >> ch;

//     if(ch >= 'a' && ch <= 'z'){
//         cout << "The character is in lowercase.";
//     }else {
//         cout << "The character is in uppercase.";
//     }

//     return 0;
// }


// a -> 97 and b -> 98
// A -> 65 and B -> 66

// int main(){
//     char ch;
//     cout << "Enter a character : ";
//     cin >> ch;

//     if(ch >= 65 && ch <= 90){
//         cout << "The character is in uppercase.";
//     }else {
//         cout << "The character is in lowercase.";
//     }

//     return 0;
// }


int main(){
    int n = 45;

    cout << (n >= 0 ? "positive" : "negative") << endl;
    return 0;
}