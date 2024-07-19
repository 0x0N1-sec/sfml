#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<double> temps;

  for(double temp; cin >> temp;)
    temps.push_back(temp);

  //compute mean
  double sum = 0;
  for (double x : temps)
    sum += x;
  cout << "Average temperature: " << sum/temps.size() << '\n';

  //compute median
  ranges::sort(temps);
  cout << "Median temperature: " << temps[temps.size()/2] << '\n';

  return 0;
}
