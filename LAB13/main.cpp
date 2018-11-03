#include <iostream>
#include<string>

using namespace std;

class CLL;

class Node 
{
  friend class CLL;
private:
  string firstName;
  string lastName;
  string phoneNumber;
  Node * nextRecord;
};

class CLL
{
private:
  Node * head;
  
public:
  CLL();
  CLL(const CLL&);  // optional
  ~CLL();
  
  void append(string, string, string);
  void insertAtBeginning(string, string, string);
  void print();
  void searchByName(string, string);
  void removeRecord(string, string);
};

//--------------------------------------------
// the default constructor
CLL::CLL()
{
  head = nullptr;
}

//--------------------------------------------
// the copy constructor: optional
CLL::CLL(const CLL& source)
{
  
}

//--------------------------------------------
// the destructor
CLL::~CLL()
{

}

//--------------------------------------------
// print the linked list
void CLL::print ()
{
  Node* nodePtr;

  nodePtr = head;

  if (head == nullptr)
    cout << "The list is empty." << endl << endl;
  else
    {
      cout << "Name: " << nodePtr->firstName << " " << nodePtr->lastName << endl;
      cout << "Number: " << nodePtr->phoneNumber << endl << endl;

      nodePtr = nodePtr->nextRecord;

      while (nodePtr != head)
        {
          cout << "Name: " << nodePtr->firstName << " " << nodePtr->lastName << endl;
          cout << "Number: " << nodePtr->phoneNumber << endl << endl;

          nodePtr = nodePtr->nextRecord;
        }
    }
}

//--------------------------------------------
// search for a particular person in the list and print the 
// corresponding phone number
void CLL::searchByName (string fName, string lName)
{
  Node* nodePtr;

  nodePtr = head;

  if (head == nullptr)
    cout << "The list is empty." << endl << endl;
  else
    {
      if ((nodePtr->firstName == fName) && (nodePtr->lastName == lName))
        {
          cout << fName << " " << lName << "'s phone number is " << nodePtr->phoneNumber <<\
	    endl << endl;

          return;
        }

      nodePtr = nodePtr->nextRecord;

      while (nodePtr != head)
        {
          if ((nodePtr->firstName == fName) && (nodePtr->lastName == lName))
            {
              cout << fName<< " " << lName << "'s phone number is " << nodePtr->phoneNumber\
		   << endl << endl;

              return;
            }
        }

      cout << fName << " " << lName << " was not found." << endl << endl;
    }
}

//--------------------------------------------
// create a node and insert the node on the top of the
// linked list before the first node.
void CLL::insertAtBeginning (string fName, string lName, string phone)
{
  Node* newNode = nullptr;
  Node* nodePtr = nullptr;
  Node* temp = head;

  newNode = new Node;
  newNode->firstName = fName;
  newNode->lastName = lName;
  newNode->phoneNumber = phone;
  newNode->nextRecord = nullptr;

  if (head == nullptr)
    {
      head = newNode;

      newNode->nextRecord = head;
    }
  else
    {
      nodePtr = head;

      head = newNode;

      newNode->nextRecord = nodePtr;

      while (nodePtr->nextRecord != temp)
        nodePtr = nodePtr->nextRecord;

      nodePtr->nextRecord = head;
    }
}

//--------------------------------------------
// create a node and appends the node at the end of the
// linked list after the last node.
void CLL::append(string fName, string lName, string phone)
{
  Node* newNode = nullptr;
  Node* nodePtr = nullptr;

  newNode = new Node;
  newNode->firstName = fName;
  newNode->lastName = lName;
  newNode->phoneNumber = phone;
  newNode->nextRecord = nullptr;

  if (head == nullptr)
    {
      head = newNode;

      newNode->nextRecord = head;
    }
  else
    {
      nodePtr = head->nextRecord;

      while (nodePtr->nextRecord != head)
	nodePtr = nodePtr->nextRecord;

      nodePtr->nextRecord = newNode;
      newNode->nextRecord = head;
    }
}


//--------------------------------------------
// remove a person's record from the list  
/*void CLL::removeRecord (string fName, string lName)
{

}*/

//--------------------------------------------
int main () 
{
  CLL list1;

  list1.append ("Mayssaa", "Najjar", "878-635-1234"); 
  list1.insertAtBeginning ("Jim", "Meyer", "337-465-2345");
  list1.append ("Joe", "Didier", "352-654-1983");
  list1.insertAtBeginning("Nancy", "Garcia", "617-227-5454");
   
  list1.print();

  list1.searchByName ("Nancy", "Garcia");

  //list1.removerecord ("Mayssaa", "Najjar");
  list1.print();
   
  // this part is optional 
  // CLL list2(list1);
  // list2.print();
   
  return 0;

}
