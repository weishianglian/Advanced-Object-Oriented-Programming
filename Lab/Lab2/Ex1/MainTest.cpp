#include "TwoDayDelivery.h"
#include "NextDayDelivery.h"

using namespace std;

int main() {
    StandardDelivery standard("Ed","1 Regent St.","London","SW1Y 4NW","QMUL","Mile End rd.","London","E1 4NS",5);
    standard.print();

    TwoDayDelivery twoDay("QMUL","Mile End rd.","London","E1 4NS","Ed","1 Regent St.","London","SW1Y 4NW",5);
    twoDay.print();

    NextDayDelivery nextDay("QMUL","Mile End rd.","London","E1 4NS","Ed","1 Regent St.","London","SW1Y 4NW",5);
    nextDay.print();

    return 0;
};