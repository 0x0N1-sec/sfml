#include <iostream>
#include <vector>

class Student
{
  std::string m_first = "First";
  std::string m_last = "last";
  int m_id = 0;
  int m_avg = 0;

public:

  Student() {}

  Student(std::string first, std::string last, int id, float avg)
    : m_first(first)
    , m_last(last)
    , m_id(id)
    , m_avg(avg)
  {
  }

  int getAvg()
  {
    return m_avg;
  }

  int getID()
  {
    return m_id;
  }

  std::string getFirst()
  {
    return m_first;
  }

  std::string getLast()
  {
    return m_last;
  }

  void print()
  {
    std::cout << m_first << " " << m_last << " ";
    std::cout << m_id << " " << m_avg << "\n";
  }
};

int main(int argc, char * argv[])
{
  Student s1;
  Student s2("Zac", "Childress", 1, 3.14);
  Student s3("John", "Doe", 20003230, 99.9);
  
  s2.print();

  return 0;
}
