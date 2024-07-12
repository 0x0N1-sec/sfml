#include <iostream>

using namespace std;

int main()
{
  cout << "Value 1 : ";
  int value_one = 0;
  cin >> value_one;

  cout << "\nValue 2 : ";
  int value_two = 0;
  cin >> value_two;

  if (value_one > value_two)
    cout << value_one << " is larger than " << value_two << endl;
  else if (value_two > value_one)
    cout << value_two << " is larger than " << value_one << endl;
  else
    cout << "The values are both " << value_one << " thus equal" << endl;

  cout << "Sum : " << (value_one + value_two) << endl;
  cout << "Difference : " << (value_one - value_two) << endl;
  cout << "Product : " << (value_one * value_two) << endl;
  cout << "Quotient : " << (value_one / value_two) << endl;

  return 0;
}
