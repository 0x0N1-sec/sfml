#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Please enter your first name and age\n";
  string firstName = "";
  double age = -1.0;
  cin >> firstName >> age;
  cout << "Hello, " << firstName  << "(age " << (age * 12) << " months old)\n";

  return 0;
}
