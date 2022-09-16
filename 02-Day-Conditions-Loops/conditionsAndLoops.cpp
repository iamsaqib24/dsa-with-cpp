#include<iostream>

using namespace std;

// if else
// int main (){
//     int a;
//     cout << "Enter the value of a : " << endl;
//     cin >> a;

//     if (a == 0) {
//         cout << "A is Zero" << endl;
//     }else if (a > 0) {
//         cout << "A is positive" << endl;
//     }else {
//         cout << "A is negative" << endl;
//     }
// }


int main() {
    char ch;
    cout << "Enter any character : " << endl;
    cin >> ch;

    if (ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'i' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'o' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'u' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z') {
        cout << "letter is lower case " << ch << endl;
    }
    else if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'I' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' || ch == 'N' || ch == 'O' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
        cout << "letter is upper case " << ch << endl;
    }
    else {
        cout << "may be numeric value entered" << endl;
    }
}
