#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string translation(string);

int main()
{
  string phrase;


  cout << "Enter a COMPLETE sentence to convert to pig latin:" << endl;
  getline (cin, phrase);

  phrase = translation(phrase);

  cout << "The pig latin translated sentence is: " ; cout << endl << "----------------------------------------" << endl ;

  cout << phrase << endl;
}


string translation(string phrase)
{
  string translateWord;
  string translateSentence = "";
  int length = 0, index = 0;


  while (phrase[index] != '\0')
    {
      if (phrase.find (' ', index) != -1)
   	{
	  if (phrase.find(' ',index) == 0)
	    {
	      index++;
      	      continue;
	    }
	  if(phrase.substr(index,1) == " " )
	    {
	      index++;
	      continue;
            }
	  length = phrase.find(' ', index);
	  length -= index;
	  translateWord = phrase.substr(index, length);
	  translateWord.insert(length, "ay");
	  translateWord.insert(length, 1, phrase[index]);
	  translateWord.erase(0,1);
	  index += length ;
      	}
      else
	{
	  translateWord = phrase.substr(index);
	  length = translateWord.length();
	  translateWord.insert(length, "ay");
	  translateWord.insert(length,1, phrase[index]);
	  translateWord.erase (0, 1);
	  index = phrase.length();
	}


      translateSentence += (translateWord + " ");
    }
  return translateSentence;
}
