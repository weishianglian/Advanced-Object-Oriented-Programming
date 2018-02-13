#ifndef STANDARDDELIVERY_H_
#define STANDARDDELIVERY_H_

#include <iostream>
#include "ParcelInfo.h"

class StandardDelivery {
public:
    StandardDelivery(const std::string &, const std::string &, const std::string &, const std::string &, 
        const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0);
    
    ParcelInfo getSender() const;
    ParcelInfo getRecipient() const;
    double getWeight() const;
    double getStandardCost() const;
    void setSender(const ParcelInfo &);
    void setRecipient(const ParcelInfo &);
    void  setWeight(double);
    double calculateCost() const;
    void  print(std::string) const;
    void  print();

private:
    ParcelInfo sender;
    ParcelInfo recipient;
    double weight;
    const double standardCost = 2.6;
};

#endif