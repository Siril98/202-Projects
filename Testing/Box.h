//Box.h file

#ifndef BOX_H
#define BOX_H
#include <iostream>
using namespace std;


class Box{

 public:
  void SetWidth(double wid);
  friend void PrintWidth(Box box);

 private:
  double m_width;



};

#endif
