#include "code_functions.hpp"

string generateCode(int codeSize)
{
    string code;

    for (int _ = 0; _ < codeSize; ++_)
    {
        char character = randomLowering(getRandomCharacter(CHARACTERS));
        code += character;
    }

    return code;
}

string convertToBinary(const string &code)
{
    string binaryCode;
    char binaryDigit;

    for (char i : code)
    {
        if (isalpha(i))
        {
            char letter = toupper(i); // NOLINT(*-narrowing-conversions)
            binaryDigit = ALPHABET.find(letter) % 2 == 0 ? '1' : '0';
        }
        else
        {
            int number = static_cast<unsigned char>(i);
            binaryDigit = number % 2 ? '0' : '1';
        }

        binaryCode += binaryDigit;
    }

    return binaryCode;
}

string getKey(const string &binaryCode)
{
    string key;

    for (char i : binaryCode)
    {
        if (i == '0')
        {
            char firstLetter = static_cast<char>(randomLowering(getRandomCharacter(ALPHABET)));
            char secondLetter = static_cast<char>(randomLowering(getRandomCharacter(ALPHABET)));
            key += firstLetter;
            key += secondLetter;
        }
        else
        {
            char firstDigit = static_cast<char>(random(1, 9) + '0');
            char secondDigit = static_cast<char>(random(1, 9) + '0');
            key += firstDigit;
            key += secondDigit;
        }
    }

    return key;
}