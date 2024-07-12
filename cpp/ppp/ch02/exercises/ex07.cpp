#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Give me 3 words separated by spaces : ";
  string a = "", b = "", c = "";
  cin >> a >> b >> c;

  string min = "", max = "", mid = "";

  if (a >= b && a >= c)
  {
    max = a;
    if (b >= c)
    {
      mid = b;
      min = c;
    }
    else
    {
      mid = c;
      min = b;
    }
  }
  else if (b >= a && b >= c)
  {
    max = b;
    if (a >= c)
    {
      mid = a;
      min = c;
    }
    else 
    {
      mid = c;
      min = a;
    }
  }
  else
  {
    max = c;
    if (a >= b)
    {
      mid = a;
      min = b;
    }
    else
    {
      mid = b;
      min = a;
    }
  }

  cout << "In alphabetical order: " << min << ", " << mid << ", " << max << endl;
  return 0;
}
