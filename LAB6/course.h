#ifndef COURSE
#define COURSE
#include <string>
using namespace std;

class Course
{

 private:
  string courseName;
  long courseNumber;
  int numberOfCredits;

 public:

  Course();
  Course(long, string, int);
  void setCourseName(string);
  void setCourseNumber(long);
  void setNumberOfCredits(int);
  string getCourseName() const;
  long getCourseNumber() const;
  int getNumberOfCredits() const;
};
#endif
