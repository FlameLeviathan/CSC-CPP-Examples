// DiceArrays.cpp : Defines the entry point for the console application.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

const short FACES = 6;

unsigned short RollDie();
void PrintRollingDieResults(size_t[], short);

int main()
{
	srand(time(0));
	size_t counts[FACES] = { 0 };
	size_t countsTwoDice[FACES][FACES];
	for (size_t i = 0; i < FACES; i++)
		for (size_t j = 0; j < FACES; j++)
			countsTwoDice[i][j] = 0;

	unsigned int times;
	cout << "How many times do you want to roll the die: ";
	cin >> times;
	for (unsigned i = 0; i < times; i++)
	{
		unsigned short dieResult = RollDie();
		counts[dieResult - 1]++;
	}
	PrintRollingDieResults(counts, FACES);

	cout << "How many times do you want to roll the two dice: ";
	cin >> times;
	for (unsigned i = 0; i < times; i++)
	{
		unsigned short dieResult1 = RollDie();
		unsigned short dieResult2 = RollDie();
		countsTwoDice[dieResult1 - 1][dieResult2 - 1] ++;
	}


	for (size_t i = 0; i < FACES; i++) {
		for (size_t j = 0; j < FACES; j++) {
			cout << setw(5) << countsTwoDice[i][j];
		}
		cout << endl;
	}
		

    return 0;
}

unsigned short RollDie() {
	return rand() % FACES + 1;
}

void PrintRollingDieResults(size_t data[], short size)
{
	for (size_t i = 0; i < size; i++)
		cout << "Face [" << i + 1 << "] = " << data[i] << endl;
}


