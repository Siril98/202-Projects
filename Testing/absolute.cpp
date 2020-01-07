
// absolute values


#include<iostream>
using namespace std;

void absoluteValues(int *integer);
void absoluteValues(int *integer){

  if(*integer < 0)
    *integer = *integer * -1;
  else
    *integer = *integer;
}


int main(){

  int input;
  int *pointerinput = &input;

  cout<< "Enter an integer" << endl;
  cin>> input;
  absoluteValues(pointerinput);
  cout << input << endl;
  
  return 0;

}
