#include "StandardDelivery.h"

using namespace std;

StandardDelivery::StandardDelivery(const string &senderName, const string &senderAddress, const string &senderCity, const string &senderPostcode, 
        const string &recipientName, const string &recipientAddress, const string &recipientCity, const string &recipientPostcode, double weight) :
    DeliveryBase(senderName, senderAddress, senderCity, senderPostcode, recipientName, recipientAddress, recipientCity, recipientPostcode, weight) {}

double StandardDelivery::getStandardCost() const {
    return standardCost;
}

double StandardDelivery::calculateCost() const {
    return getStandardCost() * getWeight();
}

void StandardDelivery::print() const {
    cout << "Standard Delivery: " << endl;
    DeliveryBase::print();
    cout << "\t\tStandard Cost: £" << getStandardCost() << " per kg" << endl;
    cout << "\t\tDelivery Fee: £" << calculateCost() << endl;
    cout << "--------------------------------------------------" << endl;   
}