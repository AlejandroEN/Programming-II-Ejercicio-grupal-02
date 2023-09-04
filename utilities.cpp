#include <random>
#include "utilities.hpp"

string input(const string &message)
{
	string _;
	cout << message;
	cin >> _;
	return _;
}

int random(int lower_limit, int upper_limit)
{
    random_device randomDevice;
    default_random_engine defaultEngine(randomDevice());
    uniform_int_distribution<int> distribution(lower_limit, upper_limit);
    return distribution(defaultEngine);
}

char getRandomCharacter(string baseString)
{
    int upperLimit = static_cast<int>(baseString.length()) - 1;
    int position = random(0, upperLimit);
    return baseString[position];
}

char randomLowering(char character)
{
    if (isalpha(character))
        character = random(0, 1) ? tolower(character): character; // NOLINT(*-narrowing-conversions)

    return character;
}