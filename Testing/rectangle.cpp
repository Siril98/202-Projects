// Practice using classes

#include <iostream>
using namespace std;


class Rectangle{

  int width;
  int height;
public:
  void SetValues(int,int);
  int CalcArea(){return width*height;}

}rect;

void Rectangle::SetValues(int x, int y){

  width = x;
  height = y;
}

int main(){

  rect.SetValues(10,5);
  cout<< "The area is: " << rect.CalcArea()<< endl;
  return 0;

}