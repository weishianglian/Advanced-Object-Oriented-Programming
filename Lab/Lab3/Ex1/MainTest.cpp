#include <vector>

#include "TwoDayDelivery.h"
#include "NextDayDelivery.h"

using namespace std;

int main() {
    StandardDelivery standard("Ed","1 Regent St.","London","SW1Y 4NW","QMUL","Mile End rd.","London","E1 4NS",5);
    TwoDayDelivery twoDay("QMUL","Mile End rd.","London","E1 4NS","Ed","1 Regent St.","London","SW1Y 4NW",25);
    NextDayDelivery nextDay("QMUL","Mile End rd.","London","E1 4NS","Ed","1 Regent St.","London","SW1Y 4NW",35);

    vector<DeliveryBase *> deliverys(3);
    deliverys[0] = &standard;
    deliverys[1] = &twoDay;
    deliverys[2] = &nextDay;

    for (const DeliveryBase *deliveryPtr : deliverys) {
        deliveryPtr -> print();
    }

    return 0;
};