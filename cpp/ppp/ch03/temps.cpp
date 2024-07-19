#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<double> temps;

  for (double temp; cin >> temp;)
    temps.push_back(temp);

  for (int i = 0; i < temps.size(); i++)
  {
    cout << temps[i] << '\n';
  }

  return 0;
}
