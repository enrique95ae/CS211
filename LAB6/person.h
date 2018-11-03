#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;


class Person
{
 private:
  string firstName;
  string lastName;
  char gender;
  string socialSecurityNumber;

 public:
  Person();
  Person(string, string, char, long);
  void setFirstName(string);
  void setLastName(string);
  void setGender(char);
  void setSocialSecurityNumber(string);
  string getFirstName() const;
  string getLastName() const;
  char getGender() const;
  string getSocialSecurityNumber() const;
};

#endif 
