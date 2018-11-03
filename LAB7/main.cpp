#include "student.h"
#include <iostream>
#include <string>
using namespace std;

void setTuition(Student&);

int main()
{
  Student student1;
  Student student2("unknown", "PHYS", "graduate", 0);
  student1.print();

  student2.getData();

  setTuition(student2);

  student2.print();

  return 0;
}

void setTuition(Student& studentX)
{
  if (studentX.classification == "undergraduate")
    {
      studentX.tuition = studentX.units * 700;
    }
  if (studentX.classification == "graduate")
    {
      studentX.tuition = studentX.units * 1000;
    }
}
