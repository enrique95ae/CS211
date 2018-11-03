#include "mortgage.h"   
#include <iostream>      
#include <cstdlib>       
#include <cmath>
using namespace std;

mortgage::mortgage()
{
  loan =0;
  rate =0.0;
  years =0;
  term =0.0;
  monthlyPayment=0.0;
}

void mortgage::setLoan(double l)
{
  if (l >= 0)
    loan = l;
  else
    {
      cout << "Invalid Loan\n";
      exit(EXIT_FAILURE);
    }
}

void mortgage::setRate(double r)
{
  if (r >= 0)
    rate = r;
  else
    {
      cout << "Invalid length\n";
      exit(EXIT_FAILURE);
    }
}

void mortgage::setYears(int y)
{
  if (y >= 0)
    years = y;
  else
    {
      cout << "Invalid length\n";
      exit(EXIT_FAILURE);
    }
}

double mortgage::getLoan() const
{
  return loan;
}

double mortgage::getRate() const
{
  return rate;
}

int mortgage::getYears() const
{
  return years;
} 

double mortgage::getMonthlyRate(){
  //    double term;
  //double monthlyPayment;
  term = pow((1+(rate/12)),(12*years));
  monthlyPayment = (loan * term * (rate/12))/(term -1);

  return monthlyPayment;
}

double mortgage::getTotalPay(){
  return (getMonthlyRate()*years*12);
}
