// lab3b


#include<iostream>
using namespace std;



int main(){

  int numIcedTea = 10;
  int *ptrIcedTea;
  ptrIcedTea = &numIcedTea;
  *ptrIcedTea = numIcedTea;
  
  
  
  cout<< ptrIcedTea << endl;
  cout<< *ptrIcedTea << endl;
  *ptrIcedTea = 20;
  cout<< *ptrIcedTea << endl;
  cout << numIcedTea << endl;
  
  return 0;
}