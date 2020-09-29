#include <iostream>

using namespace std;

int main() {
    string dato;

    cin >> dato;

    if(dato == "int") cout << sizeof(int);
    if(dato == "float") cout << sizeof(float);
    if(dato == "char") cout << sizeof(char);
    if(dato == "short") cout << sizeof(short);
    if(dato == "double") cout << sizeof(double);
    if(dato == "long") cout << sizeof(long);

    return 0;
}