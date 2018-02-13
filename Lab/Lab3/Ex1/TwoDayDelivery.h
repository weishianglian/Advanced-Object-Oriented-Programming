#ifndef TWODAYDELIVERY_H_
#define TWODAYDELIVERY_H_

#include "StandardDelivery.h"

class TwoDayDelivery : public StandardDelivery {
public:
    TwoDayDelivery(const std::string &, const std::string &, const std::string &, const std::string &, 
        const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0);
    virtual ~TwoDayDelivery() {}
    
    double getFlatFee() const;
    virtual double calculateCost() const override;
    virtual void print() const override;

private:
    const double flatFee = 4.0;
};

#endif