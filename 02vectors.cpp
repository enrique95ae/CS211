#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
  vector<int> V;
  ifstream inputFile;
  int temp, size = 0;
  int key;
  bool exists = false ;

  inputFile.open("data03.txt");
  if(inputFile){
    cout << "File was successfully opened! " << endl ;
  }else{
    cout << "File could not be opened! " << endl ;
  }
  
  while(inputFile>>temp){
    V.push_back(temp);
  }

  size = V.size();

  cout << "The vector contains: " << endl ; 
  
  for(int i=0; i<size; i++){
    cout << V[i] << " " ;
  }

  V.pop_back();
  size = V.size();

  cout << endl << "The vector without the last element contains: " << endl ;

  for(int i=0; i<size; i++){
    cout << V[i] << " " ;
  }

  cout << endl << "Enter a key to search: " ;
  cin >> key ;
  cout << endl ;

  for (int i=0; i<size; i++){
    if ( V[i] == key ){
      exists = true ;
    }
  }
  if (exists == true){
      cout << "The number you were looking for (" << key << ") EXISTS." << endl ;
  }else{
      cout << "The number you were looking for (" << key << ") DOES NOT EXIST." << endl ;
  }

  V.insert(V.begin()+(size-1), 88);
  size = V.size();

  cout << endl << "The vector without the last element and adding 88  contains: " << endl ;

  for(int i=0; i<size; i++){
    cout << V[i] << " " ;
  }

  V.erase(V.begin()+2);
  V.erase(V.begin()+2);


  size = V.size();

  cout << endl << "The vector without the second and third elements  contains: " << endl ;

  for(int i=0; i<size; i++){
    cout << V[i] << " " ;
  }

  cout << endl ;
   
  return 0;
}
