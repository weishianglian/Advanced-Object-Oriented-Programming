#include "ParcelInfo.h"

using namespace std;

string ParcelInfo::getName() const {
    return name;
}
string ParcelInfo::getAddress() const {
    return address;
}
string ParcelInfo::getCity() const {
    return city;
}
string ParcelInfo::getPostcode() const {
    return postcode;
}
void ParcelInfo::setName(const string &name) {
    this->name = name;
}
void ParcelInfo::setAddress(const string &address) {
    this->address = address;
}
void ParcelInfo::setCity(const string &city) {
    this->city = city;
}
void ParcelInfo::setPostcode(const string &postcode) {
    this->postcode = postcode;
}