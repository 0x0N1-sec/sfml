#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Write 0, 1, 2, 3, or 4 by spelling them in English : ";
  string user_input = "";
  cin >> user_input;

  if (user_input == "zero")
  {
    cout << "\nYou wrote 0\n";
  }
  else if (user_input == "one")
  {
    cout << "\nYou wrote 1\n";
  }
  else if (user_input == "two")
  {
    cout << "\nYou wrote 2\n";
  }
  else if (user_input == "three")
  {
    cout << "\nYou wrote 3\n";
  }
  else if (user_input == "four")
  {
    cout << "\nYou wrote 4\n";
  }
  else
  {
    cout << "\nThat is not 0, 1, 2, 3, or 4 written in English.\n";
  }
  return 0;
}

  
