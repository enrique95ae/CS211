#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include "instructorProfile.h"
using namespace std;
/*
====================================================================================================
    MAIN DOES THE FOLLOWING IN ORDER:                                                              *
        - Creates an object of class InstructorProfile                                             *
        - Creates multiple temporary variables for storing the data coming from the file           *
        - Opens and reads the data from the file into the temporary variables                      *
        - Stores the data in those variables into the object of class InstructorProfile            *
            -For doing so calls the corresponding function of the class type (setInstructorInfo)   *
        - Pushes the object into the vector of the same type                                       *
        - Prints out the directory                                                                 *
=====================================================================================================
*/
int main()
{
  InstructorProfile insProfileObj;

  ifstream inputFile;
  string tempfName, templName, tempOfficeNum, tempCourseName1, tempCourseName2, tempCourseName3, tempSsn;
  char tempGender;
  long tempID, tempCourseNumber1, tempCourseNumber2, tempCourseNumber3 ;
  int tempNumCredits1, tempNumCredits2, tempNumCredits3;

  vector <InstructorProfile> instructorDirectory; //Vector, directory that will contain all the data

  inputFile.open("data.txt");

  while(inputFile){ 

    inputFile >>tempfName >> templName >> tempGender >> tempSsn >> tempID >> tempOfficeNum >>
      tempCourseNumber1 >> tempCourseName1 >> tempNumCredits1 >>
      tempCourseNumber2 >> tempCourseName2 >> tempNumCredits2 >>
      tempCourseNumber3 >> tempCourseName3 >> tempNumCredits3;

    insProfileObj.setInstructorInfo(tempID, tempOfficeNum, tempfName, templName, tempGender, tempSsn, tempCourseName1, tempCourseNumber1, tempNumCredits1, tempCourseName2, tempCourseNumber2, tempNumCredits2, tempCourseName3, tempCourseNumber3, tempNumCredits3);

    instructorDirectory.push_back(insProfileObj);

    cout << tempfName << " " << templName << " " << tempGender << " " << tempSsn << " " << tempID << " " << tempOfficeNum << " "
	 << tempCourseNumber1 << " " << tempCourseName1 << " " << tempNumCredits1 << " "
	 << tempCourseNumber2 << " " << tempCourseName2 << " " << tempNumCredits2 << " "
	 << tempCourseNumber3 << " " << tempCourseName3 << " " << tempNumCredits3 << " " << endl;
  }
  return 0;
}
