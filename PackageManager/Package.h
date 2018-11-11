#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

using namespace std;

/*
THIS CLASS:
  -Default Constructor. 
  -Constructor that receives arguments.
  -Get functions for the private attributes.
  -Calcualtes the package cost (Weight * Coster/ounce) + Insurance
  -Prints the pertinent information

NOTE: validations are in PACKAGEINVENTORY.CPP
*/

class Package
{
  public:
    Package();
    Package(string, string, string, string, string , string , string, string, long, long, string, string, string, double, double);
    
    void createNewPackage(string, string, string, string,string , string , string, string, long, long, string, string, string, double, double);
    
    string getSenderName() const;
    string getRecipName() const;
    string getSenderAddress() const;
    string getRecipAddress() const;
    string getSenderCity() const;
    string getRecipCity() const;
    string getSenderState() const;
    string getRecipStat() const;
    long getSenderZIPcode() const;
    
    string getLabel() const;
    string getDate() const;
    string getInsuranceType() const;
    double getWeight() const;
    double getCost() const;
    double calculatePackageCost() const;
    
    void printAPackage() const;
    
  protected:
  
    string senderState, recipState;
    long senderZIPcode, recipZIPcode;
    
    string label, date, insuranceType;
    double weight, cost;

};

#endif // PACKAGE_H
  
    
