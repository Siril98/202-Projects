#include <iostream>
#include <cstring>

class rule_of_three
{
public:
  rule_of_three(){
    m_cstring = NULL;
  }
  rule_of_three(char* arg){
    m_cstring = arg;
  }
  rule_of_three(const char* arg)
    : m_cstring(new char[std::strlen(arg)+1]) // allocate
  {
    std::strcpy(m_cstring, arg); // populate
  }
  ~rule_of_three()
  {
    delete[] m_cstring;  // deallocate
  }
  rule_of_three(const rule_of_three& other) // copy constructor
  {
    m_cstring = new char[std::strlen(other.m_cstring) + 1];
    std::strcpy(m_cstring, other.m_cstring);
  }
  rule_of_three& operator=(const rule_of_three& other) // copy assignment
  {
    char* tmp_cstring = new char[std::strlen(other.m_cstring) + 1];
    std::strcpy(tmp_cstring, other.m_cstring);
    delete[] m_cstring;
    m_cstring = tmp_cstring;
    return *this;
  }
  char* GetString(){return m_cstring;}
  // alternatively, reuse destructor and copy ctor
  //  rule_of_three& operator=(rule_of_three other)
  //  {
  //      std::swap(cstring, other.cstring);
  //      return *this;
  //  }
private:
  char* m_cstring; // raw pointer used as a handle to a dynamically-allocated memory block
};

int main () {
  rule_of_three test1 = "Candy"; //Which function is this calling?
  rule_of_three test2; //Which function is this calling?
  rule_of_three test3(test1); //Which function is this calling?
  test2 = test1; //Which function is this calling?

  std::cout << "test1=" << test1.GetString() << std::endl;
  std::cout << "test2=" << test2.GetString() << std::endl;
  std::cout << "test3=" << test3.GetString() << std::endl;
  return 0;
}
