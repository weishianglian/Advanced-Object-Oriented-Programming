#include "TwoDayDelivery.h"

using namespace std;

TwoDayDelivery::TwoDayDelivery(const string &senderName, const string &senderAddress, const string &senderCity, const string &senderPostcode, 
        const string &recipientName, const string &recipientAddress, const string &recipientCity, const string &recipientPostcode, double weight) :
    StandardDelivery(senderName, senderAddress, senderCity, senderPostcode, recipientName, recipientAddress, recipientCity, recipientPostcode, weight) {}

double TwoDayDelivery::getFlatFee() const {
    return flatFee;
}

double TwoDayDelivery::calculateCost() const {
    return StandardDelivery::calculateCost() + getFlatFee();
}

void TwoDayDelivery::print() const {
    cout << "Two Day Delivery: " << endl;
    DeliveryBase::print();
    cout << "\t\tStandard Cost: £" << getStandardCost() << " per kg" << endl;
    cout << "\t\tFlat Fee: £" << getFlatFee() << endl;
    cout << "\t\tDelivery Fee: £" << calculateCost() << endl;
    cout << "--------------------------------------------------" << endl;
}