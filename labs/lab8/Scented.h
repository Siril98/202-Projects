// Scented.h file
#ifndef SCENTED_H
#define SCENTED_H
#include "Candle.h"
#include <string>
#include <iostream>

class Scented : public Candle{

 public:
  Scented(string name,double burnRate,string flavor);

 

  void SetFlavor(string flavor);
  string GetFlavor();
  
  
  string SetLit(bool isLit);
  
 protected:
  string m_flavor;
  
};
#endif







