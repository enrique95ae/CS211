#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){

  const double TAX = 8.5 ;
  const double DISCOUNT = 35.00 ;

  ifstream inputFile;
  ofstream outputFile;

  double originalPrice;
  double discountPrice;
  double taxPrice;
  double aux;
  int id;

  inputFile.open("shoe.txt");
  outputFile.open("shoeSale.txt");

  if(inputFile)
  {
    cout << "File was successfully opened." << endl ;
    
    while(inputFile >> id >> originalPrice)
    {

      aux = DISCOUNT * originalPrice / 100 ;
      discountPrice = originalPrice - aux ;
      aux = TAX * discountPrice / 100 ;
      taxPrice = discountPrice + aux ;

      outputFile << id << setprecision(2) << fixed << setw(10) << right << taxPrice << endl ; 
    }
    
  }
  else
  {
    cout << "There was an error while opening the file." << endl ;
  }


  return 0;
}
