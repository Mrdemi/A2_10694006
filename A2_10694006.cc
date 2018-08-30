#include <iostream>
using namespace std;

int main()
{int n, i;
  bool xPrime = true;

  cout << "Type in an integer: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {if(n % i == 0)
      {xPrime = false;
          break;
      }
  }
  if (xPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
