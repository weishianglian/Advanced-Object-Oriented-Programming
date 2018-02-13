#ifndef NEXTDAYDELIVERY_H_
#define NEXTDAYDELIVERY_H_

#include "StandardDelivery.h"

class NextDayDelivery : public StandardDelivery {
public:
    NextDayDelivery(const std::string &, const std::string &, const std::string &, const std::string &, 
        const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0);
    virtual ~NextDayDelivery() {}
    
    double getAdditionalCost() const;
    virtual double calculateCost() const override;
    virtual void print() const override;

private:
    const double additionalCost = 3.5;    
};

#endif