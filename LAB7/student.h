#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
  friend void setTuition(Student&);

 private:
  string name;
  const long studentID;
  string major;
  string classification;
  int units;
  float tuition;
  static int totalNumOfStudents;
  static long nextStudentID;
 public:
  Student();
  Student(string, string, string, int);
  ~Student();
  void print() const;
  void getData();
};

#endif
