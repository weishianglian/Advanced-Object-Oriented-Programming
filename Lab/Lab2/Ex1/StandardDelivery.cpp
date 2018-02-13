#include <stdexcept>

#include "StandardDelivery.h"

using namespace std;

StandardDelivery::StandardDelivery(const string &senderName, const string &senderAddress, const string &senderCity, const string &senderPostcode, 
        const string &recipientName, const string &recipientAddress, const string &recipientCity, const string &recipientPostcode, double weight) {
    sender.setName(senderName);
    sender.setAddress(senderAddress);
    sender.setCity(senderCity);
    sender.setPostcode(senderPostcode);
    recipient.setName(recipientName);
    recipient.setAddress(recipientAddress);
    recipient.setCity(recipientCity);
    recipient.setPostcode(recipientPostcode);
    setWeight(weight);
}

ParcelInfo StandardDelivery::getSender() const {
    return sender;
}

ParcelInfo StandardDelivery::getRecipient() const {
    return recipient;
}

double StandardDelivery::getWeight() const {
    return weight;
}

double StandardDelivery::getStandardCost() const {
    return standardCost;
}

void StandardDelivery::setSender(const ParcelInfo &sender) {
    this->sender = sender;
}

void StandardDelivery::setRecipient(const ParcelInfo &recipient) {
    this->recipient = recipient;
}

void StandardDelivery::setWeight(double weight) {
    if (weight >= 0.0)
        this->weight = weight;
    else
        throw invalid_argument("Parcel Weight must grater equal than zero");
}

double StandardDelivery::calculateCost() const {
    return standardCost * weight;
}

void StandardDelivery::print(string title) const {
    cout << "--------------------------------------------------" << endl;
    cout << title << " Delivery: " << endl;
    cout << "\tSender" << endl << "\t\tName: " << getSender().getName() << endl;
    cout << "\t\tAddress: " << getSender().getAddress() << endl;
    cout << "\t\tCity: " << getSender().getCity() << endl;
    cout << "\t\tPostcode: " << getSender().getPostcode() << endl;
    cout << "\tRecipient" << endl << "\t\tName: " << getRecipient().getName() << endl;
    cout << "\t\tAddress: " << getRecipient().getAddress() << endl;
    cout << "\t\tCity: " << getRecipient().getCity() << endl;
    cout << "\t\tPostcode: " << getRecipient().getPostcode() << endl;
    cout << "\tParcel" << endl;
    cout << "\t\tWeight: " << getWeight() << " kg" << endl;    
    cout << "\t\tStandard Cost: £" << getStandardCost() << " per kg" << endl;
}

void StandardDelivery::print() {
    print("Standard");
    cout << "\t\tDelivery Fee: £" << calculateCost() << endl;
}