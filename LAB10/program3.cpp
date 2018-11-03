#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string, int, int);

int main()
{
  string sentence, setencecheck;
  char char1, char2;
  int size;

  cout << "Enter a word or a sentence: " ;
  getline(cin, sentence);
  size = sentence.length();

  for(int x = 0; x<size ; x++){
    if(isPalindrome(sentence, size, x))
    {
      cout << "The word/sentence: " << sentence << " is a palindrome! " << endl;
    }
  else
    {
      cout << "The word/sentence: " << sentence << " is not a palindrome! "<< endl;
    }
  }
  
  return 0;
}


bool isPalindrome(string sentence, int start, int end)
{
  if (start >= end)   
    return true;
  if (sentence[start] != sentence[end])
    return false;
  return isPalindrome(sentence, ++start, --end);   
}
