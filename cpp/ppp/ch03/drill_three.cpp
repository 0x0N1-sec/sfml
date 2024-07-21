#include <iostream>
#include <string>
#include <limits>
#include <vector>


int main()
{
  double user_input = 0.0;
  double smallest = std::numeric_limits<double>::max(); 
  double largest = std::numeric_limits<double>::min();
  double sum = 0.0;
  int count = 0;
  std::vector<double> meter_values;

  while(std::to_string(user_input) != "|" && std::cin >> user_input)
  {
    
    std::string units = "";
    std::cin >> units;

    if (units != "cm" && units != "m" && units != "in" && units != "ft")
    {
      std::cout << "Units must be either cm, m, in, or ft! Start over!\n";
      continue;
    }

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
    sum += user_input;
    count++;

    if (units == "cm")
    {
      meter_values.push_back(user_input * 100);
    }
    else if (units == "m")
    {
      meter_values.push_back(user_input);
    }
    else if (units == "in")
    {
      double move_input = user_input * 2.54;
      meter_values.push_back(move_input * 100);
    }
    else if (units == "ft")
    {
      double move_input = (user_input /12) * 2.54;
      meter_values.push_back(move_input * 100);
    }
  }
  
  std::cout << "\nLargest: " << largest << std::endl;
  std::cout << "Smallest: " << smallest << std::endl;
  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Count: " << count << std::endl;
  std::cout << "Values you entered in meters:\n";
  for(double i : meter_values)
  {
    std::cout << i << "m" << std::endl;
  }
  return 0;
}
