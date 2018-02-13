#include "Rainfall.h"
using namespace std;

int main() {
    const array<double, Rainfall::months> rainfallAmount = 
        {215.6, 167.8, 86.3, 85.5, 80.5, 62.4, 118.5, 112.5, 171.8, 48.7, 101.4, 129.6};
    Rainfall rainfall(rainfallAmount);
    
    // Validation Test
    rainfall.setMonthAmount(13, 999);
    rainfall.setMonthAmount(1, -999);
    cout << rainfall.getMonthAmount(13) << endl << endl;

    // Getter & Setter Test
    for (size_t m = 1; m <= Rainfall::months; m++) {
        double newAmount = rainfall.getMonthAmount(m) + 1;
        rainfall.setMonthAmount(m, newAmount);
        cout << Rainfall::monthsName[m-1] << ": " << rainfall.getMonthAmount(m) << endl;
    }

    // Functions Test
    cout << "----------------------------------" << endl;
    cout << "Highest: " << rainfall.getHighest() << endl;
    cout << "Lowest: " << rainfall.getLowest() << endl;
    cout << "Mean: " << rainfall.getMean() << endl;
    
    rainfall.outputBarChart();
    return 0;
}
