#ifndef STANDARDDELIVERY_H_
#define STANDARDDELIVERY_H_

#include "DeliveryBase.h"

class StandardDelivery : public DeliveryBase {
public:
    StandardDelivery(const std::string &, const std::string &, const std::string &, const std::string &, 
        const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0);
    virtual ~StandardDelivery() {}

    double getStandardCost() const;
    virtual double calculateCost() const override;
    virtual void print() const override;

private:
    const double standardCost = 2.6;
};

#endif