//

#include <iostream>
#include <string>
using namespace std;


class Shoe{

 public:

  Shoe(int size, string brand, sting color);
  ~Shoe();
  
 private:
  int *m_size;
  string *m_brand;
  string *color;
};
