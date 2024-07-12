#include <iostream>
#include <string>

using namespace std;

int main()
{
  int 950;        // Illegal - compile-time error
  int forty_;     // Legal but kind of a weird way to do things
  int FORTY;      // Legal but normally used for macros
  int forty;      // Legal
  int _forty;     // Legal but a terrible idea - possible sys/imp name clash
  int 40_;        // Illegal - compile-time error
  int _40;        // Legal but a terrible idea - possible sys/imp name clash

  return 0;
}
