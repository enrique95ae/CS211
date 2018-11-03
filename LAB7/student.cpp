#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int Student::totalNumOfStudents = 0;
long Student::nextStudentID = 10000;

Student::Student() : studentID(nextStudentID)
{
  name = "Unknown";
  major = "CS";
  classification = "undergraduate";
  units = 12;
  tuition = 0;

  totalNumOfStudents += 1;
  nextStudentID += 1;
}

Student::Student(string x, string y, string z, int a) : studentID(nextStudentID)
{
  name = x;
  major = y;
  classification = z;
  units = a;

  tuition = 0;

  totalNumOfStudents += 1;
  nextStudentID+= 1;
}

Student::~Student()
{
  totalNumOfStudents -= 1;
}

void Student::getData()
{
  string x, y, z;
  int a;
  cout << "Enter student name: ";
  getline(cin, x);
  name = x;

  cout << "Enter student major: ";
  cin >> y;
  major = y;

  cout << "Enter student classification: ";
  cin >> z;
  classification = z;

  cout << "Enter units being taken for student: ";
  cin >> a;
  units = a;
}

void Student::print() const
{
  cout << "Student Name: " << name << endl;
  cout << "Student ID: " << studentID << endl;
  cout << "Student Major: " << major << endl;
  cout << "Student Classification: " << classification << endl;
  cout << "Student Units: " << units << endl;
  cout << "Student Tuition: " << units*1000 << endl;
  cout << "Total Number of Students: " << totalNumOfStudents << endl;
}
