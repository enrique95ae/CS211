#include "person.h"

Person::Person()
{
  firstName = "";
  lastName = "";
  gender = 'A';
  socialSecurityNumber = "";
}

Person::Person(string fName, string lName, char gen, long ssn)
{
  firstName = fName;
  lastName = lName;
  gender = gen;
  socialSecurityNumber = ssn;
}

void Person::setFirstName(string fn)
{
  firstName = fn;
}

void Person::setLastName(string ln)
{
  lastName = ln;
}

void Person::setGender(char g)
{
  gender = g;
}

void Person::setSocialSecurityNumber(string s)
{
  socialSecurityNumber = s;
}

string Person::getFirstName() const
{
  return firstName;
}

string Person::getLastName() const
{
  return lastName;
}

char Person::getGender() const
{
  return gender;
}

string Person::getSocialSecurityNumber() const
{
  return socialSecurityNumber;
}
