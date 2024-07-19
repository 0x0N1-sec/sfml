#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v = {1, 3, 5, 7, 9};

  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << '\n';
  }
  return 0;
}
