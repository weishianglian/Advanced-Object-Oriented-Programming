#include "Rainfall.h"

using namespace std;

const char * const Rainfall::monthsName[months] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

Rainfall::Rainfall(const array<double, months> &rainfallArray) : rainfallAmount(rainfallArray) {}

double Rainfall::getMonthAmount(int month) {
	if (month > 0 && month < 13) 
		return rainfallAmount[month-1];
	else 
		return -1;
}

void Rainfall::setMonthAmount(int month, double amount) {
	if (month > 0 && month < 13) {
		if (amount >= 0) {
			rainfallAmount[month-1] = amount;
		} else {
			cout << "The amount must be greater equal than zero. " << endl;
		}
	} else {
		cout << "The month must be between 1 and 12." << endl;
	}
}

double Rainfall::getHighest() {
	double max = 0.0;
	for (double amount : rainfallAmount) {
		if (amount > max)
			max = amount;
	}
	return max;
}

double Rainfall::getLowest() {
	double min = 10000.0;
	for (double amount : rainfallAmount) {
		if (amount < min)
			min = amount;
	}
	return min;
}

double Rainfall::getMean() {
	double sum = 0.0;
	for (double amount : rainfallAmount) {
		sum += amount;
	}
	double mean = sum / months;
	return mean;
}

void Rainfall::outputBarChart() {
	array<unsigned int, months> bins = {};
	cout << endl << "Rainfall Statistics" << endl;
	for (size_t count = 0; count < months; count++) {
		double amount = rainfallAmount[count];
		if (amount < 60) {
			bins[count] = 1;
		} else if (amount >= 60 && amount < 100) {
			bins[count] = 2;
		} else if (amount >= 100 && amount < 150) {
			bins[count] = 3;
		} else if (amount >= 150 && amount < 200) {
			bins[count] = 4;
		} else {
			bins[count] = 5;
		}
	}
	for (size_t count = 0; count < months; count++) {
		cout << monthsName[count] << ": ";
		for (size_t index = 0; index < bins[count]; index++) {
			cout << "*";
		}
		cout << endl;
	}

}
