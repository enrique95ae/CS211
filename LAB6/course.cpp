#include "course.h"

#include <iostream>
#include <string>
using namespace std;


Course::Course()
{
  courseName = "";
  courseNumber = 0;
  numberOfCredits = 0;
}

Course::Course(long courseNum, string course, int numOfCredits)
{
  courseNumber = courseNum;
  courseName = course;
  numberOfCredits = numOfCredits;
}

void Course::setCourseName(string n){
  courseName = n;
}

void Course::setCourseNumber(long n){
  courseNumber = n;
}

void Course::setNumberOfCredits(int n){
  if(0<n && n<4){
    numberOfCredits = n;
  }else{
    cout << "Invalid number of credits\n";
  }
}

string Course::getCourseName() const
{
  return courseName;
}

long Course::getCourseNumber() const
{
  return courseNumber;
}

int Course::getNumberOfCredits() const
{
  return numberOfCredits;
}
