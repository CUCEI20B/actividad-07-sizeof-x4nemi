#include <iostream>

using namespace std;

int tam(string dato);

int main() {
    string tipoDato;

    cin >> tipoDato;

    cout << tam(tipoDato);

    return 0;
}

//char, int, short, float, double, long

int tam(string dato){
    if(dato == "int") return sizeof(int);
    if(dato == "float") return sizeof(float);
    if(dato == "char") return sizeof(char);
    if(dato == "short") return sizeof(short);
    if(dato == "double") return sizeof(double);
    if(dato == "long") return sizeof(long);
}