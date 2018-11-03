#include "instructor.h"

Instructor::Instructor()
{
  employeeID = 0;
  officeNumber = "";

}

Instructor::Instructor(long ID, string officeNum)
{
  employeeID = ID;
  officeNumber = officeNum;
}

void Instructor::setEmployeeID(long n){
  employeeID = n;
}

void Instructor::setOfficeNumber(string n){
  officeNumber = n;
}

void Instructor::setCourse(string n, long m, int c, string n2, long m2, int c2, string n3, long m3, int c3)
{
  courses[0].setCourseName(n);
  courses[0].setCourseNumber(m);
  courses[0].setNumberOfCredits(c);
  courses[1].setCourseName(n2);
  courses[1].setCourseNumber(m2);
  courses[1].setNumberOfCredits(c2);
  courses[2].setCourseName(n3);
  courses[2].setCourseNumber(m3);
  courses[2].setNumberOfCredits(c3);
}

long Instructor::getEmployeeID() const
{
  return employeeID;
}

string Instructor::getOfficeNumber() const
{
  return officeNumber;
}

Course Instructor:: getCourse1() const
{
  return courses[0];
}

Course Instructor:: getCourse2() const
{
  return courses[1];
}

Course Instructor:: getCourse3() const
{
  return courses[2];
}
