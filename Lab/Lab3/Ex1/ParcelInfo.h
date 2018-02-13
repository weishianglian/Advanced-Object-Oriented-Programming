#ifndef PARCELINFO_H_
#define PARCELINFO_H_

#include <string>

class ParcelInfo {
public:
    std::string getName() const;
    std::string getAddress() const;
    std::string getCity() const;
    std::string getPostcode() const;
    void setName(const std::string &);
    void setAddress(const std::string &);
    void setCity(const std::string &);
    void setPostcode(const std::string &);
private:
    std::string name;
    std::string address;
    std::string city;
    std::string postcode;
};

#endif