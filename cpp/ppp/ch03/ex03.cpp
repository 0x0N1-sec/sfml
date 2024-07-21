#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>

int main()
{
  std::vector<double> temps;
  for(double temp; std::cin >> temp;)
    temps.push_back(temp);

  //compute mean
  double sum = 0;
  for(double x : temps)
    sum += x;
  std::cout << "Average temperature: " << sum/temps.size() << '\n';

  //compute median
  std::ranges::sort(temps);

  if(int(temps[temps.size()/2]) % 2 == 0)
  {
    std::cout << "Median temperature: " << (temps[temps.size()/2.0]) + 0.5 << '\n';
  }
  else
  {
    std::cout << "Median temperature: " << temps[temps.size()/2.0] << '\n';
  }
  return 0;
}
