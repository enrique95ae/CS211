#ifndef PRIORITYPACKAGE_H
#define PRIORITYPACKAGE_H

#include <iostream>
#include <string>

using namespace std;

/*
THIS CLASS:
  -Inherits from PACKAGE class.
*/

class PriorityPackage : public Package
{
  public:
    PriorityPackage();
    PriorityPackage(string, double, double, double, string, string, string, string, string, string, string, string, long, long, string, string, string, double, double);
    string getPriorityType() const;
    double getPWidth() const;
    double getPLength() const;
    double getPHeight() const;
    double calculatePriorityCost() const;
    
    void printAPriorityPackage() const;
    
  protected:
    string type;
    double pWidth, pLenght, pHeight;
};

#endif // PRIORITYPACKAGE_H
