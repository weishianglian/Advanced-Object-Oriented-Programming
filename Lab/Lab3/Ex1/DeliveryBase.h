#ifndef DELIVERYBASE_H_
#define DELIVERYBASE_H_

#include <iostream>

#include "ParcelInfo.h"

class DeliveryBase {
public:
    DeliveryBase(const std::string &, const std::string &, const std::string &, const std::string &, 
        const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0);
    virtual ~DeliveryBase() {}

    ParcelInfo getSender() const;
    ParcelInfo getRecipient() const;
    double getWeight() const;
    void setSender(const ParcelInfo &);
    void setRecipient(const ParcelInfo &);
    void  setWeight(double);
    virtual double calculateCost() const=0;
    virtual void print() const;

private:
    ParcelInfo sender;
    ParcelInfo recipient;
    double weight;
};

#endif