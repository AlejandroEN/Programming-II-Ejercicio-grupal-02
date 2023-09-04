#include "utilities.hpp"

const string CHARACTERS = ALPHABET + FIRST_NINE_NUMBERS;
string generateCode(int codeSize);
string convertToBinary(const string& code);
string getKey(const string &binaryCode);