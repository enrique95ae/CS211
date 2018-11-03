#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

// Function prototype
bool isMember(int [], int, int);

int main()
{
  // Create an array with some values in it.
  int numbers[ARRAY_SIZE] = {2, 4, 6, 8, 10, 12, 14, 16 ,18, 20 };
   
  // Search for the values 0 through 20 in the array.
  for (int x = 0; x <= 20; x++)
    {
      if (isMember(numbers, x, ARRAY_SIZE))
	cout << x << " is found in the array.\n";
      else
	cout << x << " is not found in the array.\n";
    }

  return 0;
}

bool isMember(int ARR[], int x, int y)
{
      if(y == 0)
	{
	  return false;
     	}
      else if(ARR[y-1] == x)
        {
          return true;
        }
      else
	{
	  isMember(ARR, x, y-1);
	}
}
