#include <iostream>
#include <cmath>
#include "mortgage.h"  
using namespace std;

int main()
{
  mortgage mortgageVar;    
  double loan;  
  double rate; 
  int years;

  
  cout << "This program will calculate the monthly payment and total:\n";
  cout << "What is the loan amount in dollars? ";
  cin >> loan;
  cout << endl ;
  cout << "What is the rate in decimal form? ";
  cin >> rate;
  cout << endl;
  cout << "How many years? ";
  cin >> years;
  cout << endl;

  mortgageVar.setLoan(loan);
  mortgageVar.setRate(rate);
  mortgageVar.setYears(years);

  // Display the rectangle's data.
  cout << "Here is the mortgage's data:\n";
  cout << "Monthly payment: $" << mortgageVar.getMonthlyRate() << endl;
  cout << "Total pay: $" << mortgageVar.getTotalPay() << endl;
  return 0;
}
