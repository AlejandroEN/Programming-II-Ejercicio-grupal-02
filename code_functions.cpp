#include "code_functions.hpp"
#include <cctype>

string generateCode(int codeSize)
{
    string code;
    const int upperLimit = static_cast<int>(characters.length());

    for (int _ = 0; _ < codeSize; ++_)
    {
        int position = random(0, upperLimit - 1);
        char character = characters[position];

        if (isalpha(character))
            character = random(0, 1) ? tolower((character)) : characters[position]; // NOLINT(*-narrowing-conversions)

        code += character;
    }

    return code;
}

string convertToBinary(string code)
{
    string binaryCode;
    char binaryDigit;

    for (char i : code)
    {
        if (isalpha(i))
        {

        }
        else
        {

        }
    }

    return binaryCode;
}