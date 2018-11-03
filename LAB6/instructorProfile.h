#ifndef INSTRUCTORPROFILE_H
#define INSTRUCTORPROFILE_H

#include <vector>
#include <iostream>
using namespace std;
#include "person.h"
#include "instructor.h"

class InstructorProfile
{
 private:
  Person personalInfo;
  Instructor instructorInfo;
 public:
  void setPersonalInfo(string, string, char);
  void setInstructorInfo(long, string, string, string, char, string, string, long, int, string, long, int, string, long, int);
 
};

#endif // INSTRUCTORPROFILE_H
