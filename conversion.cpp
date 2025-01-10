#include <iostream>
using namespace std; 

// int main() {
//     char grade = 'A';
//     int value = grade;
//     cout << value << endl;
//     return 0;
// } 

// int main(){
//     double price = 100.99;
//     int newPrice = (int)price;
//     cout << newPrice << endl;
//     return 0;
// }

int main(){
    double  price;
    // cout << age << endl; // agar koi bhi value nahi denge toh ye garbage vale print karega 
    cout << "Enter the price : ";
    cin >> price ;
    cout << "Your price is : " << price << endl;
    return 0;
}