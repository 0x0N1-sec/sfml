#include <iostream>
#include <string>

using namespace std;

int main()
{
  int numberOfWords = 0;
  string previous;
  string current;

  while (cin >> current)
  {
    ++numberOfWords;
    
    if (previous == current)
      cout << "Word number " << numberOfWords << " repeated: " << current << "\n";
    previous = current;
  }

  return 0;
}
