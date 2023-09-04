#include <iostream>

using namespace std;

const string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string FIRST_NINE_NUMBERS  = "1233456789";
string input(const string &message = "");
int random(int lowerLimit = 0, int upperLimit = 100);
char getRandomCharacter(string baseString);
char randomLowering(char character);