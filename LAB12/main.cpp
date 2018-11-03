#include <iostream>
#include<string>
 
using namespace std;
 
class LL;
 
class Node
{
  friend class LL;
private:
  string firstName;
  string lastName;
  string phoneNumber;
  Node * nextRecord;
};
 
class LL
{
private:
  Node * head;
    
  void destroy();
 
public:
  LL();
  LL(const LL&);
  ~LL();
    
  void append(string, string, string);
  void insertAtBeginning(string, string, string);
  void insertByPos(string, string, string, int);
  void print();
  void searchByName(string, string);
  void updateNumber(string, string, string);
  void removeRecord(string, string);
  void reverse();
};
 
//--------------------------------------------
// the default constructor
LL::LL()
{
  head = nullptr;
}
 
//--------------------------------------------
// the copy constructor
LL::LL(const LL& source)
{
  Node *nodePtr = nullptr;

  head = nullptr;
  nodePtr = source.head;
  
  while(nodePtr)
    {
      append(nodePtr->firstName, nodePtr->lastName, nodePtr->phoneNumber);
      nodePtr = nodePtr->nextRecord;
    }

}
 
//--------------------------------------------
// the destructor
LL::~LL()
{
  Node *nodePtr;
  Node *nextNode;
  
  nodePtr = head;
  
  while(nodePtr != nullptr)
    {
      nextNode = nodePtr->nextRecord;
      delete nodePtr;
      nodePtr = nextNode;
    }
}
 
//--------------------------------------------
// print the linked list
void LL::print ()
{
  Node *nodePtr;
  nodePtr = head;

  cout << endl << "PRINTTING THE LIST: " << endl << endl;

  while(nodePtr)
    {
      cout << "First Name: " <<  nodePtr->firstName << endl;
      cout << "Last Name: " << nodePtr->lastName << endl;
      cout << "Phone number " << nodePtr->phoneNumber << endl;
      cout << "-------------------------------" << endl ;
      nodePtr = nodePtr->nextRecord;
    }
}
 
//--------------------------------------------
// search for a particular person in the list and print the
// corresponding phone number
void LL::searchByName (string fName, string lName)
{
  Node *nodePtr;
  nodePtr = head;
  
  while(nodePtr)
    {
      if(nodePtr->firstName == fName && nodePtr->lastName == lName)
	{
	  cout << "The following person was found: " << endl;
	  cout << nodePtr->firstName << endl << nodePtr->lastName << endl;
	}
      else
	{
	  //cout << "Nobody was found with those names. " << endl ;
	}
      nodePtr = nodePtr->nextRecord;
    }
}
 
//--------------------------------------------
// create a node and insert the node on the top of the
// linked list before the first node.
void LL::insertAtBeginning (string fName, string lName, string phone)
{
  Node *newNode;
  Node *nodePtr;
  Node *tempPtr;
  
  newNode = new Node;
  newNode->firstName = fName;
  newNode->lastName = lName;
  newNode->phoneNumber = phone;
  
  if(!head)//if empty
    {
      head = newNode;
      newNode->nextRecord = nullptr;      
    }
  else//if it has nodes in
    {
      tempPtr = head;
      head = newNode;
      newNode->nextRecord = tempPtr; 
    }
}
 
//--------------------------------------------
// create a node and appends the node at the end of the
// linked list after the last node.
void LL::append(string fName, string lName, string phone)
{
  Node *newNode;
  Node *nodePtr;

  newNode = new Node;
  newNode->firstName = fName;
  newNode->lastName = lName;
  newNode->phoneNumber = phone;
  newNode->nextRecord = nullptr;

  if(!head)
    head = newNode;
  else
    {
      nodePtr = head;

      while(nodePtr->nextRecord)
	nodePtr = nodePtr->nextRecord;

      nodePtr->nextRecord = newNode;
    }
}
 
//--------------------------------------------
// create a node and insert the node at the position pos
void LL:: insertByPos(string fName, string lName, string phone, int pos)
{
  Node *previousNode = nullptr;
  Node * newNode;
  Node *curr  = new Node;
  Node *nodePtr;

  newNode = new Node;
  newNode->firstName = fName;
  newNode->lastName = lName;
  newNode->phoneNumber = phone;
  newNode->nextRecord = nullptr;

  int tempPos = 0;   // Traverses through the list

  curr = head;      // Initialize current to head;
  if(head != NULL)
    {
      while(curr->nextRecord != NULL && tempPos != pos)
	{
	  previousNode = curr;
	  curr = curr->nextRecord;
	  tempPos++;
	}
      if(pos==0)
	{
	  insertAtBeginning(fName, lName, phone); //insert at beginning, list is empty.
	}
      else if(curr->nextRecord == NULL && pos == tempPos+1)
	{
	  cout << "Adding at Tail! " << endl;
	  append(fName, lName, phone);
	}
      else if(pos > tempPos+1)
	{
	  cout << " Position is out of bounds " << endl;
	}
      else
	{
	  previousNode->nextRecord = newNode;
	  newNode->nextRecord = curr;
	}
    }
} 
//--------------------------------------------
// remove a person's record from the list 
void LL::removeRecord (string fName, string lName)
{
  Node *nodePtr;
  Node *previousNode;

  if(head->firstName == fName && head->lastName == lName)
    {
      nodePtr = head->nextRecord;
      delete head;
      head = nodePtr;
    }
  else
    {
      nodePtr = head;
      while(nodePtr != NULL && nodePtr->firstName != fName && nodePtr->lastName != lName)
	{
	  previousNode = nodePtr;
	  nodePtr = nodePtr->nextRecord;
	}
      if(nodePtr)
	{
	  previousNode->nextRecord = nodePtr->nextRecord;
	  delete nodePtr;
	}
    }
}
 
//--------------------------------------------
// Update a person's phone number 
void LL::updateNumber(string fName, string lName, string newPhone)
{
  Node *nodePtr;
  nodePtr = head;

  while(nodePtr)
    {
      if(nodePtr->firstName == fName && nodePtr->lastName == lName)
        {
	  cout << "UPDATING PHONE NUMBER: " << endl;
          cout << "The following person was found: " << endl;
          cout << nodePtr->firstName << endl << nodePtr->lastName << endl;
	  cout << "OLD PHONE NUMBER: " << nodePtr->phoneNumber << endl;
	  nodePtr->phoneNumber = newPhone;
	  cout << "NEW PHONE NUMBER: " << nodePtr->phoneNumber << endl;
        }
      nodePtr = nodePtr->nextRecord;
    }
}
 
//--------------------------------------------
// Destroy all the nodes in the list
void LL::destroy()
{
  Node *nodePtr;
  Node *nextNode;

  nodePtr = head;

  while(nodePtr != nullptr)
    {
      nextNode = nodePtr->nextRecord;
      delete nodePtr;
      nodePtr = nextNode;
    } 
}
 
 
//--------------------------------------------
// traverse the list and reverse the list nodes so the last node
// becomes the first and the first node becomes the last one 

void LL::reverse()
{
  if(head == nullptr) return;

  Node *previousNode = nullptr;
  Node *currentNode = nullptr;
  Node *nextNode = nullptr;
  currentNode = head;

  while(currentNode != nullptr){
    nextNode = currentNode->nextRecord;
    currentNode->nextRecord = previousNode;
    previousNode = currentNode;
    currentNode = nextNode;
  }
 
  head = previousNode;
}


//--------------------------------------------
int main ()
{
  LL list1;

  cout << endl <<  "PROGRAM EXECUTION START: " << endl << endl;
 
  list1.append ("Mayssaa", "Najjar", "878-635-1234");
  list1.insertAtBeginning ("Jim", "Meyer", "337-465-2345");
  list1.append ("Joe", "Didier", "352-654-1983");
  list1.insertByPos ("Adam", "James", "202-872-1010", 2);
  list1.insertAtBeginning("Nancy", "Garcia", "617-227-5454");
  
  list1.print();
 
  list1.searchByName ("Nancy", "Garcia");
  list1.searchByName ("Jamie", "Garcia");
 
  list1.updateNumber ("Nancy", "Garcia", "989-876-1234");
  list1.updateNumber ("Jamie", "Garcia", "345-467-1234");
 
  list1.removeRecord ("Mayssaa", "Najjar");
  list1.print();
  
  list1.reverse();
  list1.print();
 
  LL list2(list1);
  list2.print();
  
  return 0;
}
