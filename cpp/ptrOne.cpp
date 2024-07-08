#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
  char *names[] = {"Miller","Jones","Anderson"};
   printf("%c\n",*(*(names+1)+2));
   printf("%c\n",names[1][2]);

   return 0;
}

