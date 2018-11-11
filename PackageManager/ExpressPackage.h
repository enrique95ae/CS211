#ifndef EXPRESSPACKAGE_H
#define EXPRESSPACKAGE_H

#include "Package.h"

#include <iostream>
#include <string>

using namespace std;

/*
THIS CLASS:
  - Inherits from Package class
*/

class ExpressPackage : public Package
{
  public:
    ExpressPackage();
    ExpressPackage(double, string, string, string, string, string, string, string, string, long, long, string, string, string, double, double);
    double getExpressFee() const;
    void printAExpressPackage() const;
    double calculateExpressCost() const;
    
  protected:
    double expressFee;
};

#endif // EXPRESSPACKAGE_H
