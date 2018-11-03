#ifndef INSTRUCTOR
#define INSTRUCTOR

using namespace std;
#include "course.h"

class Instructor
{
 private:
  long employeeID;
  string officeNumber;
  Course courses[3];
  Course newCourse;

 public:
  Instructor();
  Instructor(long, string);
  void setEmployeeID(long);
  void setOfficeNumber(string);
  void setCourse(string, long, int, string, long, int, string, long, int);
  long getEmployeeID() const;
  string getOfficeNumber() const;
  Course getCourse1() const;
  Course getCourse2() const;
  Course getCourse3() const;
};
#endif
