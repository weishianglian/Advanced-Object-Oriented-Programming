#ifndef TWODAYDELIVERY_H_
#define TWODAYDELIVERY_H_

#include "StandardDelivery.h"

class TwoDayDelivery : public StandardDelivery {
public:
    TwoDayDelivery(const std::string &, const std::string &, const std::string &, const std::string &, 
        const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0);
    
    double getFlatFee() const;
    double calculateCost() const;
    void  print() const;

private:
    const double flatFee = 4.0;
};

#endif