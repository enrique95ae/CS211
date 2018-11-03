#ifndef MORTGAGE_H
#define MORTGAGE_H


class mortgage
{
 private:
  double loan;
  double rate;
  int years;
  double term, term1, term2;
  double monthlyPayment;

 public:
  mortgage();
  void setLoan(double);
  void setRate(double);
  void setYears(int);
  double getLoan() const;
  double getRate() const;
  int getYears() const;
  double getMonthlyRate();
  double getTotalPay();
};


#endif


