#include "Food.h"
#include "Candy.h"
#include <iostream>
using namespace std;


int main(){

  Food food("Lung");
  food.Cook();
  food.DisposeOf();

  Candy candy1("Candy Corn");
  candy1.Cook();
  candy1.DisposeOf();
  candy1.RotTeeth();

  return 0;
  
}
