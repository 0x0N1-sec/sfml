#include <iostream>
#include <string>
#include <limits>

int main()
{
  double user_input = 0.0;
  double smallest = std::numeric_limits<double>::max(); 
  double largest = std::numeric_limits<double>::min();

  while(std::to_string(user_input) != "|" && std::cin >> user_input)
  {
    if (user_input < smallest)
    {
      smallest = user_input;
      std::cout << user_input << " is the smallest so far\n";
    }
    else if (user_input > largest)
    {
      largest = user_input;
      std::cout << user_input << " is the largest so far\n";
    }
    else
    {
      std::cout << user_input << '\n';
    }

  }

  return 0;
}
