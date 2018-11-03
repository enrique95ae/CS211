
#include <iostream>
using namespace std;

int multiply(int x, int y);

int main()
{
  
  int result;

  result = multiply(7, 4);

  cout << result << endl ;

}

int multiply(int x, int y)
{
  if (y==1)
    {
      return x;
    }
  else
    {
      return x + multiply(x, y - 1);
    }
}
