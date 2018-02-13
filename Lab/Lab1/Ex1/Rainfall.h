#ifndef RAINFALL_H_
#define RAINFALL_H_

#include <string>
#include <array>
#include <iostream>
#include <stdexcept>

class Rainfall {
public:
	static const size_t months = 12;
    static const char * const monthsName[months];
	Rainfall(const std::array<double, months> &);
	double getMonthAmount(int);
	void setMonthAmount(int, double);
	double getHighest();
	double getLowest();
	double getMean();
	void outputBarChart();

private:
	std::array<double, months> rainfallAmount;
};

#endif
