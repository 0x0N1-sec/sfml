#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Name of person to whom you are writing : ";
  string first_name;
  cin >> first_name;

  cout << "Name of mutual friend of yours and " << first_name << "\'s : ";
  string friend_name;
  cin >> friend_name;

  cout << "Age of " << first_name << " : ";
  int age = 0;
  cin >> age;

  cout << "Dear " << first_name << "," << endl;

  cout << " How are you these days? I am doing well and missing you!\n";
  cout << "I am writing today to talk to you about the dangers of AI.\n";
  cout << "Now, it is quite clear our species will be annihilated! OH NOZ!\n";
  cout << "";
  cout << "Well, whatever.  Have you seen " << friend_name << " lately? How are they?\n";
  cout << "Are they aware they havve mere weeks to live before being killed  by\n";
  cout << "sleep Michael Bay\'s Tranfsormers Decepticon-esque AI-powered nanobots!?\n";
  cout << "We need to tell them NOW! But, alas, I hear you just had a birthday! WOW!\n";
  cout << "So now you must be " << age << " years old! Too bad it'll be the last one!\n";

  if (age < 12)
    cout << "Next year you would have been " << (age+1) << " but AI will get us first\n";
  if (age == 17)
    cout << "If we had survived AI, you could\'ve started to vote next year!\n";
  if (age > 70)
    cout << "Also, are you retired yet?\n";
  
  cout << "Yours sincerely,\n";
  cout << "Zac\n";

  return 0;
}
