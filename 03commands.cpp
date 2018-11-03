#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

ifstream inputFile;

void loadingFile();
void manageData(vector<string>& V, string& command, string& strInsert,int& pos, int& count, int& key, int& size);
void deleteData(vector<string>& V, int& key, int& count, int& size);
void insertData(vector<string>& V,string& strInsert,int& pos, int& size, int& count);
void print(vector<string>& V, int& size);
void closingFile();

//-------------------MAIN------------------------

int main(){

  vector<string> V;
  int size, pos=0, key, count=0;
  string strInsert;
  string command;
  string line;
  
  loadingFile();
  manageData(V, command,strInsert, pos, count, key, size);
  closingFile();

  return 0;
}

//------------------MAIN ENDS---------------------

void loadingFile(){
  inputFile.open("data04.txt");
  if(inputFile){
    cout << "File is open!" << endl ;
  }else{
    cout << "Error while opening the file" << endl ;
  }
}

void manageData(vector<string>& V, string& command, string& strInsert,int& pos, int& count, int& key, int& size){
  while(inputFile >> command){
    size = V.size();
    if(command == "insert"){
      inputFile >> strInsert >> pos ;
      insertData(V, strInsert, pos, size, count);
    }else if(command == "delete"){
      inputFile >> key ;
      deleteData(V, key, count, size);
    }else{
      print(V, size);
    }
  }
}

void insertData(vector<string>& V,string& strInsert,int& pos, int& size, int& count){
  size = V.size();
  if(V.empty()){
    V.push_back(strInsert);
  }else{
    V.insert(V.begin()+pos,strInsert);
  }
}

void deleteData(vector<string>& V, int& key, int& count, int& size){
  size = V.size();
  /*
  if(key < size){
    V.erase(V.begin()+key);
  }
  */
  V.erase(V.begin()+key);
}

void print(vector<string>& V, int& size){
  for(int i=0; i<V.size(); i++){
    cout << V[i] << " " ;
  }
  cout << endl ;
}

void closingFile(){
  inputFile.close();
}
