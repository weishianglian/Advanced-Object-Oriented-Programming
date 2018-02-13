#include <stdexcept>

#include "DeliveryBase.h"

using namespace std;

DeliveryBase::DeliveryBase(const string &senderName, const string &senderAddress, const string &senderCity, const string &senderPostcode, 
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

ParcelInfo DeliveryBase::getSender() const {
    return sender;
}
ParcelInfo DeliveryBase::getRecipient() const {
    return recipient;
}
double DeliveryBase::getWeight() const {
    return weight;
}
void DeliveryBase::setSender(const ParcelInfo &sender) {
    this->sender = sender;
}
void DeliveryBase::setRecipient(const ParcelInfo &recipient) {
    this->recipient = recipient;
}
void DeliveryBase::setWeight(double weight) {
    if (weight >= 0.0)
        this->weight = weight;
    else
        throw invalid_argument("Parcel Weight must grater equal than zero");
}
void DeliveryBase::print() const {
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
}