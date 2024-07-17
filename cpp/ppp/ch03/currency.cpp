#include <iostream>

using namespace std;

int main()
{
  // 1 dollar = 158.61 yen
  // 1 dollar = 10.62 krona
  // 1 krona = 14.93 yen
  cout << "Enter amount of money followed by a space then a  'y' for yen, 'd' for dollars, or 'k' for krona: ";
  double amount = 0.0;
  char currency_type = 'a';
  cin >> amount >> currency_type;

  if (currency_type == 'y')
  {
    cout << "\nYour yen are worth " << (amount * .0063) << " dollars\n";
    cout << "Your yen are worth " << (amount * .067) << " krona\n";
  }
  else if (currency_type = 'd')
  {
    cout << "\nYour dollars are worth " << (amount * 158.61) << " yen\n";
    cout << "Your dollars are worth " << (amount * 10.62) << "krona\n";
  }
  else if (currency_type = 'k')
  {
    cout << "\nYour krona are worth " << (amount * 14.93) << " yen\n";
    cout << "Your krona are worth " << (amount * .094) << " dollars\n";
  }
  else
  {
  }


  return 0;
}
