#include "instructorProfile.h"

void InstructorProfile::setPersonalInfo(string fName, string lName, char gen)
{
  personalInfo.setFirstName(fName);
  personalInfo.setLastName(lName);
  personalInfo.setGender(gen);
}

void InstructorProfile::setInstructorInfo(long ID, string officeNum, string fName, string lName, char gen, string ssn, string n, long m, int c, string n2, long m2, int c2, string n3, long m3, int c3)
{
  instructorInfo.setEmployeeID(ID);
  instructorInfo.setOfficeNumber(officeNum);
  instructorInfo.setCourse(n, m, c, n2, m2, c2, n3, m3, c3);

  void setPersonalInfo(string fName, string lName, char gen);

}
