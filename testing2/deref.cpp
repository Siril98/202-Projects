// Pointers and derefrencing


#include<iostream>
using namespace std;

int main(){

  int candy = 15;         // New int candy set to 10.
  int *ptrCandy = &candy; // New int pointer pointing
  // at the memory address of
  // candy.
  cout << candy << endl;     // Print candy
  cout << *ptrCandy << endl; // Print dereferenced
  // ptrCandy
  *ptrCandy += *ptrCandy;
  
  cout << candy << endl;
  cout << *ptrCandy << endl;
  return 0;
  

}
