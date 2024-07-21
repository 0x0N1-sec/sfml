#include <iostream>
#include <string>

int main()
{
  std::cout << "Give us a string: ";
  std::string user_input = "";
  std::cin >> user_input;

  for(char i : user_input)
  {
    std::cout << i << " as int: " << int(i) << '\n';
  }
  return 0;
}
