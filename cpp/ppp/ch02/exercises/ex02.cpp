//converts miles to km
#include <iostream>

using namespace std;

int main()
{
  cout << "Let's convert Miles to Kilometers!\n";
  cout << "MILES TO CONVERT> ";
  double miles = 0.0;
  cin >> miles;
  double km = miles * 1.609;
  cout << miles << "mi = " << km << "km\n";

  return 0;
}
