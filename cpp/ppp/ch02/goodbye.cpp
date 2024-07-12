#include <iostream>
#include <string>

using namespace std;

//Error 1: Main must be main
int Main()
{
  //Error 2: STRING must be string
  STRING s = "Goodbye, cruel world!";
  //Error 3: cOut must be cout
  //Error 4: S was declared as s so must be s
  //           as C++ is case-sensitive
  cOut << S << '\n';
}
