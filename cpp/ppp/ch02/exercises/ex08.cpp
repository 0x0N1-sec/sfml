#include <iostream>

using namespace std;

int main()
{
  cout << "Give me an integer : ";
  int user_num = 0;
  cin >> user_num;

  if (user_num % 2 == 0)
  {
    cout << user_num << " is even!\n";
  }
  else
  {
    cout << user_num << " is odd!\n";
  }
}
