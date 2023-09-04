#include "code_functions.hpp"
#include <format>

int main()
{
    int codeSize = stoi(input("Ingrese el tamaño de la clave: "));
    string code = generateCode(codeSize);
    string binaryCode = convertToBinary(code);
    string key = getKey(binaryCode);

    cout << format("Cadena de caracteres ingresada: {0}", code) << endl;
    cout << format("Clave generada: {}", binaryCode) << endl;
    cout << format("Llave generada: {}", key) << endl;
}