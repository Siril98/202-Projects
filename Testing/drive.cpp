#include "Shoe.h"
using namespace std;


int main(){

  Shoe* shoeArray = new Shoe [50];
  delete [] shoeArray;
  shoeArray = NULL;

  return 0;


}
