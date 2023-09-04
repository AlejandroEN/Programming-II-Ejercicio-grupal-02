#include "code_functions.hpp"

int main()
{
    int codeSize = stoi(input("Ingrese el tamaño de la clave: "));
    string code = generateCode(codeSize);
    cout << code;
}