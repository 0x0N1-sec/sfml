#include <iostream>

using namespace std;

int main()
{
  cout << "Enter number of bills you have followed by a space followed by currency type\n";
  cout << "Available types are: 'd' (dollar) | 'k' (krona) | 'y' (yen) | 'z' (franc)\n";
  int amount = 0;
  char type = 'a';
  cin >> amount >> type;

  switch (type)
  {
    case 'd':
      cout << "\nYour dollars are worth " << (amount * 140.99) << " yen.\n";
      cout << "Your dollars are worth " << (amount * 14.93) << " krona.\n";
      cout << "Your dollars are worth " << (amount * .84) << " Swiss francs.\n";
      break;
    case 'k':
      cout << "\nYour krona are worth " << (amount * 16.23) << " yen.\n";
      cout << "Your krona are worth " << (amount * .1493) << " dollars.\n";
      cout << "Your krona are worth " << (amount * .072) << " Swiss francs.\n";
      break;
    case 'y':
      cout << "\nYour yen are worth " << (amount * .014) << " dollars.\n";
      cout << "Your yen are worth " << (amount * .1623) << " krona.\n";
      cout << "Your yen are worth " << (amount * .0291) << " Swiss francs.\n";
      break;
    case 'z':
      cout << "\nYour Swiss francs are worth " << (amount * 1.84) << " dollars.\n";
      cout << "Your Swiss francs are worth " << (amount * 148.21) << " yen.\n";
      cout << "Your Swiss francs are worth " << (amount * 43.22) << " krona.\n";
      break;
    default:
      cout << "I don't recognize that type of currency. You are probably high.\n";
  }
  return 0;
}
