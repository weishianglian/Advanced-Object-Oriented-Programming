#include "NumGuessGame.h"

using namespace std;

NumGuessGame::NumGuessGame() {
	srand(time(NULL));
	number = rand() % 8999 + 1000;
}

void NumGuessGame::play() {
	string input;
	int guess = -1;
	do {
		cout << "Please enter your guessing number: ";
		cin >> input;
		try {
			if (input == "quit") {
				break;
			} else if (stoi(input) >= 1000 && stoi(input) < 10000) {
				guess = stoi(input);
				if (number > guess) {
					cout << "Your guessing number is lower than the value" << endl;
				} else if (number < guess) {
					cout << "Your guessing number is higher than the value" << endl;
				} else {
					cout << "You win!!" << endl << "Your guessing number is equal to the value." << endl;
					break;
				}
			} else {
				throw invalid_argument("");
			}
		} catch(const exception& e) {
			cout << "Input must be located between 1000 and 9999" << endl;
		}
	} while(number != guess);
}

