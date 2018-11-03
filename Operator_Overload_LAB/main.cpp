#include <iostream>
#include <string>
using namespace std;

class Date;

Date operator ++(Date&);
Date operator --(Date&, int);
ostream &operator <<(ostream &, const Date &);  
//istream &operator >>(istream &, const Date &);
//bool operator >(const Date &, const Date &);
//int operator -(const Date &, const Date &);

const int NUM_MONTHS = 12;

//============================================
//===========CLASS DECLARATION================
//============================================

class Date
{
  friend Date operator ++(Date &);
  friend Date operator --(Date &, int);
  friend ostream &operator <<(ostream &, const Date &);

private:
  int month;
  int day;
  int year;

  string names[NUM_MONTHS];
  int numDays[NUM_MONTHS];

  void setNames();
  void setDays();

public:
  Date();
  Date(int, int, int);

  void setMonth(int m);
  void setDay(int d);
  void setYear(int y);

  void showDate1();
  void showDate2();

};

//=============================================
//=======FUNCTION DEFINITIONS==================
//=============================================

Date::Date(int m, int d, int y)
{
  setMonth(m);
  setDay(d);
  setYear(y);
  setNames();
  setDays();
}

void Date::setNames()
{
  names[0] = "January";
  names[1] = "Febraury";
  names[2] = "March";
  names[3] = "April";
  names[4] = "May";
  names[5] = "June";
  names[6] = "July";
  names[7] = "August";
  names[8] = "September";
  names[9] = "October";
  names[10] = "November";
  names[11] = "December";
}

void Date::setDays()
{
  numDays[0] = 31;
  numDays[1] = 28;
  numDays[2] = 31;
  numDays[3] = 30;
  numDays[4] = 31;
  numDays[5] = 30;
  numDays[6] = 31;
  numDays[7] = 31;
  numDays[8] = 30;
  numDays[9] = 31;
  numDays[10] = 30;
  numDays[11] = 31;
}

void Date::setMonth(int m)
{
  if(m >=1 && m <=12)
    month = m;
  else
    cout << m << " is not a valid value for the month. \n";
}

void Date::setDay(int d)
{
  if (d >= 1 && d <= 31)
    day = d;
  else
    cout << d << " is not a valid value for the day.\n";
}

void Date::setYear(int y)
{
  if (y < 1900)
    cout << "Enter a 4 digit year of 1900 or greater.\n";
  else
    year = y;
}

void Date::showDate1()
{
  cout << month << "/" << day << "/" << year;
}

void Date::showDate2()
{
  cout << names[month+1] << " " << day << ", ";
  cout << year << endl;
}

Date operator ++(Date & d)
{  
  if (d.day == d.numDays[d.month - 1])
    {
      if (d.month == 12)
	{
	  d.month = 1;
	  d.day = 1;
	  d.year++;
	}
      else
	{
	  d.month++;
	  d.day = 1;
	}
    }
  else
      d.day++;
  return d;
}

Date operator --(Date & d, int crap)
{
  if (d.day == 1)
    {
      if (d.month == 1)
	{
	  d.month = 12;
	  d.day = 31;
	  d.year--;
	}
      else
	{
	  d.month--;
	  d.day = d.numDays[d.month-1];
	}
    }
  else
    {
      d.day--;
    }
  return d;
}

ostream &operator << (ostream &strm, const Date &obj)
{
  strm << obj.day << obj.month<< obj.year << endl;
   return strm;
}

/*
istream &operator >>(istream &strm, Date &obj)
{
   
}
*/




main()
{
  
  Date d1(2, 2, 2006); 
  Date d2(11, 10, 2003);

  ++d1;
  d1.showDate2();

  d1--;
  d1.showDate2();

  cout << d1;

  return 0;
}
