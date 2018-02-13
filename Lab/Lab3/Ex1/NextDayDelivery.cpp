#include "NextDayDelivery.h"

using namespace std;

NextDayDelivery::NextDayDelivery(const string &senderName, const string &senderAddress, const string &senderCity, const string &senderPostcode, 
        const string &recipientName, const string &recipientAddress, const string &recipientCity, const string &recipientPostcode, double weight) :
    StandardDelivery(senderName, senderAddress, senderCity, senderPostcode, recipientName, recipientAddress, recipientCity, recipientPostcode, weight) {}

double NextDayDelivery::getAdditionalCost() const {
    return additionalCost;
}

double NextDayDelivery::calculateCost() const {
    return StandardDelivery::calculateCost() + getAdditionalCost() * getWeight();
}

void NextDayDelivery::print() const {
    cout << "Next Day Delivery: " << endl;
    DeliveryBase::print();
    cout << "\t\tStandard Cost: £" << getStandardCost() << " per kg" << endl;
    cout << "\t\tAdditional Cost: £" << getAdditionalCost() << " per kg" << endl;
    cout << "\t\tDelivery Fee: £" << calculateCost() << endl;
    cout << "--------------------------------------------------" << endl;
}