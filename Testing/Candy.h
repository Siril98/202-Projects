//Inherited Class Child Class

#ifndef CANDY_H
#define CANDY_H
#include "Food.h"
//Cosntructor
class Candy: public Food{

 public:
 Candy(string name): Food(name){}
  //Overriding Dispose of
  
  void DisposeOf();
  //Only Candy
  void RotTeeth();
  
};
#endif
