#ifndef INTERNATIONALPACKAGE_H
#define INTERNATIONALPACKAGE_H

#include "Package.h"

#include <iostream>
#include <string>

using namespace std;


class InternationalPackage : public Package
{
  public:
    InternationalPackage();
    InternationalPackage(string, string, string, string, string, string, string, string, string, long, long, string, string, string, double, double);
    string getCountry() const;
    void printAInternationalPackage() const;
    double calculateInternationalCost() const;
  
  protected:
    string country;
};

#endif // INTERNATIONALPACKAGE_H
