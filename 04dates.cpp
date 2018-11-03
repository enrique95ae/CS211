#include <iostream>
#include <string>
using namespace std;

string monthConvert(string);

int main(){

  string enterDate;
  string finalDate;
  string temp;
  string aux;

  int month;
  int index;
  int size;

  cout << "Enter a date with the following format (mm/dd/yyyy): " ;
  getline(cin, enterDate);
  cout << endl ;

  index = enterDate.find('/', 0);
  temp = enterDate.substr(0,index);
  temp = monthConvert(temp);
  size = finalDate.size();
  finalDate.insert(size, temp + " ");

  index = enterDate.find('/', 0);
  temp = enterDate.substr(index+1, 2);
  size = finalDate.size();
  if(temp[0]=='0'){
    temp.erase(0,1);
    finalDate.insert(size, temp + ", ");
    index = index + 4 ;
    temp = enterDate.substr(index, 4);
    size = finalDate.size();
    finalDate.insert(size, temp);
  }else{
    finalDate.insert(size, temp + ", ");
  }

  index = index + 4 ;
  temp = enterDate.substr(index, 4);
  size = finalDate.size();
  finalDate.insert(size, temp);

  cout << finalDate << endl ;

  return 0;
}


string monthConvert(string month){
  string wordMonth;

  if(month == "01" ){
    wordMonth = "January" ;
  }

  if(month == "02" ){
    wordMonth ="February" ;
  }

  if(month == "03" ){
    wordMonth ="March" ;
  }

  if(month == "04" ){
    wordMonth ="April" ;
  }

  if(month == "05" ){
    wordMonth ="May" ;
  }

  if(month == "06" ){
    wordMonth ="June" ;
  }
  if(month == "07" ){
    wordMonth ="July" ;
  }

  if(month == "08" ){
    wordMonth ="August" ;
  }

  if(month == "09" ){
    wordMonth ="September" ;
  }

  if(month == "10" ){
    wordMonth ="October" ;
  }

  if(month == "11" ){
    wordMonth ="November" ;
  }

  if(month == "12" ){
    wordMonth == "December" ;
  }

  return wordMonth;
}
