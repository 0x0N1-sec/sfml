#include <iostream>

using namespace std;

int main()
{
  cout << "Give me three integers separated by spaces : ";
  int a = 0, b = 0, c = 0;
  cin >> a >> b >> c;

  int min = 0, mid = 0, max = 0;

  if (a > b && a > c)
  {
    max = a;
    if (b > c)
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
  else if (b > a && b > c)
  {
    max = b;
    if (a > c)
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
    if (a > b)
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

  cout << "From smallest to largest: " << min << ", " << mid << ", " << max << endl;
  return 0;
}
