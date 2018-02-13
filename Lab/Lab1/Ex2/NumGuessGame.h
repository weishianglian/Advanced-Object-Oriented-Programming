#ifndef NUMGUESSGAME_H_
#define NUMGUESSGAME_H_

#include <cstdlib>
#include <iostream>
#include <string>
#include <stdexcept>

class NumGuessGame {
public:
	NumGuessGame();
	void play();

private:
	int number;
};

#endif