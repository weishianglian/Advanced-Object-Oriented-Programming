#ifndef NEXTDAYDELIVERY_H_
#define NEXTDAYDELIVERY_H_

#include "StandardDelivery.h"

class NextDayDelivery : public StandardDelivery {
public:
    NextDayDelivery(const std::string &, const std::string &, const std::string &, const std::string &, 
        const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0);
    
    double getAdditionalCost() const;
    double calculateCost() const;
    void  print() const;
    
private:
    const double additionalCost = 3.5;    
};

#endif