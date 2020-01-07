//Friend class

#include<iostream>
using namespace std;


class Square;// This is an example of Forward Declaration

class Rectangle{

public:

  int area(){return (m_width*m_height);}
  void convert(Square a);
    
private:
  int m_width;
  int m_height;
  
};

class Square{

public:
  Square(int a): m_side(a){}
  friend class Rectangle; // friend clas

private:

  int m_side;

};

void Rectangle::convert(Square a){

  m_width = a.m_side;
  m_height = a.m_side;

}

int main(){

  Rectangle rekt;

  Square sqr(4);

  rekt.convert(sqr);
  
  cout<<rekt.area()<<endl;
  return 0;
}
